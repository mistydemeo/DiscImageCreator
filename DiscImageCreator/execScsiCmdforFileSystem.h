/**
 * Copyright 2011-2018 sarami
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#pragma once

BOOL ReadCDForFileSystem(
	PEXEC_TYPE pExecType,
	PEXT_ARG pExtArg,
	PDEVICE pDevice,
	PDISC pDisc
);

BOOL ReadVolumeDescriptor(
	PEXEC_TYPE pExecType,
	PEXT_ARG pExtArg,
	PDEVICE pDevice,
	PDISC pDisc,
	BYTE byIdx,
	LPBYTE pCdb,
	LPBYTE lpBuf,
	INT nPVD,
	INT nOffset,
	LPBOOL lpReadVD,
	PVOLUME_DESCRIPTOR pVolDesc
);

BOOL ReadPathTableRecord(
	PEXEC_TYPE pExecType,
	PEXT_ARG pExtArg,
	PDEVICE pDevice,
	PDISC pDisc,
	LPBYTE pCdb,
	DWORD dwLogicalBlkCoef,
	DWORD dwPathTblSize,
	DWORD dwPathTblPos,
	INT nOffset,
	PDIRECTORY_RECORD pDirRec,
	LPINT nDirPosNum
);

BOOL ReadDirectoryRecord(
	PEXEC_TYPE pExecType,
	PEXT_ARG pExtArg,
	PDEVICE pDevice,
	PDISC pDisc,
	LPBYTE pCdb,
	LPBYTE lpBuf,
	DWORD dwLogicalBlkCoef,
	DWORD dwRootDataLen,
	INT nOffset,
	PDIRECTORY_RECORD pDirRec,
	INT nDirPosNum
);

BOOL ReadGDForFileSystem(
	PEXEC_TYPE pExecType,
	PEXT_ARG pExtArg,
	PDEVICE pDevice,
	PDISC pDisc
);

BOOL ReadDVDForFileSystem(
	PEXEC_TYPE pExecType,
	PEXT_ARG pExtArg,
	PDEVICE pDevice,
	PDISC pDisc,
	CDB::_READ12* cdb,
	LPBYTE lpBuf
);