# -*- coding: utf-8 -*-

from .. import common
from ..builder import getTargetName as getTargetNameCommon

def getTargetName(
    _moduleName,
):
    return getTargetNameCommon(
        common.FGPP,
        _moduleName,
    )
