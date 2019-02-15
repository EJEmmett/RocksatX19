net_module = Extension(
    'net',
    sources=['netmodule.cpp'],
    language='C++',
    include_dirs=[pybind11.get_include(True)],)
