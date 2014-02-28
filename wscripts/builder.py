# -*- coding: utf-8 -*-

from . import common
from . import cmdoption

import os.path

def getTargetName(
    _header,
    _moduleName,
):
    return _header + '-' + _moduleName

def buildShlib(
    _context,
    _target,
    _sources,
):
    _build(
        _context.shlib,
        _context,
        _target,
        _sources,
    )

def _build(
    _buildFunc,
    _context,
    _target,
    _sources,
):
    _buildFunc(
        target = _target,
        source = _generateSources( _sources ),
        includes = _context.env.MY_INCLUDES,
        defines = _context.env.MY_DEFINES,
        cxxflags = _context.env.MY_CXXFLAGS,
        linkflags = _context.env.MY_LINKFLAGS,
    )

def _generateSources(
    _sources,
    _parent = None,
):
    result = set()

    TYPE = type( _sources )
    if TYPE is dict:
        for key, values in _sources.items():
            parent = key
            if _parent is not None:
                parent = os.path.join(
                    _parent,
                    parent,
                )

            result |= _generateSources(
                values,
                parent,
            )
    elif TYPE is set or TYPE is list:
        for i in _sources:
            result |= _generateSources(
                i,
                _parent,
            )
    else:
        if _parent is not None:
            _sources = os.path.join(
                _parent,
                _sources,
            )

        result.add( _sources )

    return result
