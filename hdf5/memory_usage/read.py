import h5py
import numpy


def get_mem(msg=''):
    print('-' * 20, msg, '-' * 20)
    with open('/proc/self/status') as f:
        for line in f.readlines():
            if line.startswith('VmSize') or line.startswith('VmRSS') or line.startswith('VmPeak'):
                print(line.strip())

get_mem()


with h5py.File('data.h5', 'r') as f:
    dset = f['hahaha']
    print(dset.chunks)
    data = numpy.ones(dset.shape, dtype=dset.dtype)
    get_mem()
    dset.read_direct(data)


get_mem('read done')
del data
get_mem('del done')
# h5py.h5.garbage_collect()
get_mem('gc done')
