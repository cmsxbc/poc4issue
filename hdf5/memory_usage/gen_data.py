import h5py
import numpy

data = numpy.array(['abcdefghijklmnopqrstuvwxyz'] * 1000000000, dtype='S')
with h5py.File("data.h5", "w") as f:
    dset = f.create_dataset("hahaha", data=data, chunks=(409, ))
