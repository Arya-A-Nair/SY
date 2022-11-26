from sklearn import preprocessing
import numpy as np
a = np.random.random((1, 4))
a = a*20
print("Data = ", a)
normalized = preprocessing.normalize(a)
print("Normalized Data = ", normalized)