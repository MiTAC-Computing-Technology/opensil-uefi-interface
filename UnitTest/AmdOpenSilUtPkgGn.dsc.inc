## @file
# AMD OpenSIL PHX Host Unit Test Package DSC Include File
#
# Copyright (c) 2024 Advanced Micro Devices, Inc. All rights reserved.
#
##

!include AmdOpenSilPkg/opensil-uefi-interface/UnitTest/AmdOpenSilUtPkg.dsc.inc

[Defines]
  #

[LibraryClasses.common.HOST_APPLICATION]


[Components.common.HOST_APPLICATION]

  AmdOpenSilPkg/opensil-uefi-interface/UnitTest/Source/Xmp/SilHelloWorldUt/SilHelloWorldUt.inf

  #Mock Tests
  #AmdOpenSilPkg/opensil-uefi-interface/UnitTest/Source/MockTests/UtCpuOps/UtCpuOpsUT.inf
  #AmdOpenSilPkg/opensil-uefi-interface/UnitTest/Source/MockTests/UtxSIMFake/UtxSIMFakeUT.inf
  #AmdOpenSilPkg/opensil-uefi-interface/UnitTest/Source/MockTests/UtxSIMMock/UtxSIMMockUT.inf
  #AmdOpenSilPkg/opensil-uefi-interface/UnitTest/Source/MockTests/UtSocLogicalId/UtSocLogicalIdUT.inf
