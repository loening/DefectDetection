import cv2,os,random
import numpy as np
import torch



class FeatureVisualization:
    def __init__(self,features,path):
        self.features = features
        self.path = path

    def draw_feature(self,f,key):
        feature = f[:, 0, :, :]
        feature = feature.view(feature.shape[1], feature.shape[2])
        feature = feature.cpu().data.numpy()

        feature = 1.0 / (1 + np.exp(-1 * feature))
        feature = np.round(feature * 255)
        outname = str(random.random())+'.jpg'
        cv2.imwrite(os.path.join(self.path,'{}_{}.jpg'.format(key,outname)), feature)

    def get_feature(self):
        if isinstance(self.features,dict):
            # assert len(self.features.shape) == 4, self.features.shape
            for key,value in self.features.items():
                fs = value.split(1,dim=0)
                for f in fs:
                    self.draw_feature(f,key)
        if isinstance(self.features,list):
            for index,fe in enumerate(self.features):
                fs = fe.split(1, dim=0)
                for f in fs:
                    self.draw_feature(f, "P{}".format(str(index+3)))
   
        # fs = torch.split(self.features,[1,1,1,1],dim=1)
        # for index,f in enumerate(fs):
        #     feature = f.cpu().data.numpy()[0,0,:,:]

        #     feature = 1.0 / (1 + np.exp(-1 * feature))
        #     feature = np.round(feature * 255)
        #     outname = str(random.random())
        #     cv2.imwrite(os.path.join(self.path,'{}_{}.jpg'.format(index,outname)), feature)