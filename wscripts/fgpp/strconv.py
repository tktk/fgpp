# -*- coding: utf-8 -*-

from .. import common
from ..builder import buildShlib
from .builder import getTargetName

_MODULE_NAME = 'strconv'
TARGET = getTargetName( _MODULE_NAME )

def build( _context ):
    buildShlib(
        _context,
        TARGET,
        sources = {
            common.SOURCE_DIR : {
                common.FGPP : {
                    _MODULE_NAME : {
                        'toutf32.cpp',
                    },
                },
            },
        },
    )
