import ctypes as ct

class Mtrx(ct.Structure):
    _fields_ = [ ("uu",ct.POINTER(ct.POINTER(ct.c_double))),
                 ("ln1", ct.c_int),
                 ("ln2", ct.c_int) ]
