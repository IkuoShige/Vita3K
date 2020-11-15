// Vita3K emulator project
// Copyright (C) 2018 Vita3K team
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

#pragma once

#include <module/module.h>

BRIDGE_DECL(sceGxmAddRazorGpuCaptureBuffer)
BRIDGE_DECL(sceGxmBeginCommandList)
BRIDGE_DECL(sceGxmBeginScene)
BRIDGE_DECL(sceGxmBeginSceneEx)
BRIDGE_DECL(sceGxmColorSurfaceGetClip)
BRIDGE_DECL(sceGxmColorSurfaceGetData)
BRIDGE_DECL(sceGxmColorSurfaceGetDitherMode)
BRIDGE_DECL(sceGxmColorSurfaceGetFormat)
BRIDGE_DECL(sceGxmColorSurfaceGetGammaMode)
BRIDGE_DECL(sceGxmColorSurfaceGetScaleMode)
BRIDGE_DECL(sceGxmColorSurfaceGetStrideInPixels)
BRIDGE_DECL(sceGxmColorSurfaceGetType)
BRIDGE_DECL(sceGxmColorSurfaceInit)
BRIDGE_DECL(sceGxmColorSurfaceInitDisabled)
BRIDGE_DECL(sceGxmColorSurfaceIsEnabled)
BRIDGE_DECL(sceGxmColorSurfaceSetClip)
BRIDGE_DECL(sceGxmColorSurfaceSetData)
BRIDGE_DECL(sceGxmColorSurfaceSetDitherMode)
BRIDGE_DECL(sceGxmColorSurfaceSetFormat)
BRIDGE_DECL(sceGxmColorSurfaceSetGammaMode)
BRIDGE_DECL(sceGxmColorSurfaceSetScaleMode)
BRIDGE_DECL(sceGxmCreateContext)
BRIDGE_DECL(sceGxmCreateDeferredContext)
BRIDGE_DECL(sceGxmCreateRenderTarget)
BRIDGE_DECL(sceGxmDepthStencilSurfaceGetBackgroundDepth)
BRIDGE_DECL(sceGxmDepthStencilSurfaceGetBackgroundMask)
BRIDGE_DECL(sceGxmDepthStencilSurfaceGetBackgroundStencil)
BRIDGE_DECL(sceGxmDepthStencilSurfaceGetForceLoadMode)
BRIDGE_DECL(sceGxmDepthStencilSurfaceGetForceStoreMode)
BRIDGE_DECL(sceGxmDepthStencilSurfaceGetFormat)
BRIDGE_DECL(sceGxmDepthStencilSurfaceGetStrideInSamples)
BRIDGE_DECL(sceGxmDepthStencilSurfaceInit)
BRIDGE_DECL(sceGxmDepthStencilSurfaceInitDisabled)
BRIDGE_DECL(sceGxmDepthStencilSurfaceIsEnabled)
BRIDGE_DECL(sceGxmDepthStencilSurfaceSetBackgroundDepth)
BRIDGE_DECL(sceGxmDepthStencilSurfaceSetBackgroundMask)
BRIDGE_DECL(sceGxmDepthStencilSurfaceSetBackgroundStencil)
BRIDGE_DECL(sceGxmDepthStencilSurfaceSetForceLoadMode)
BRIDGE_DECL(sceGxmDepthStencilSurfaceSetForceStoreMode)
BRIDGE_DECL(sceGxmDestroyContext)
BRIDGE_DECL(sceGxmDestroyDeferredContext)
BRIDGE_DECL(sceGxmDestroyRenderTarget)
BRIDGE_DECL(sceGxmDisplayQueueAddEntry)
BRIDGE_DECL(sceGxmDisplayQueueFinish)
BRIDGE_DECL(sceGxmDraw)
BRIDGE_DECL(sceGxmDrawInstanced)
BRIDGE_DECL(sceGxmDrawPrecomputed)
BRIDGE_DECL(sceGxmEndCommandList)
BRIDGE_DECL(sceGxmEndScene)
BRIDGE_DECL(sceGxmExecuteCommandList)
BRIDGE_DECL(sceGxmFinish)
BRIDGE_DECL(sceGxmFragmentProgramGetPassType)
BRIDGE_DECL(sceGxmFragmentProgramGetProgram)
BRIDGE_DECL(sceGxmFragmentProgramIsEnabled)
BRIDGE_DECL(sceGxmGetContextType)
BRIDGE_DECL(sceGxmGetDeferredContextFragmentBuffer)
BRIDGE_DECL(sceGxmGetDeferredContextVdmBuffer)
BRIDGE_DECL(sceGxmGetDeferredContextVertexBuffer)
BRIDGE_DECL(sceGxmGetNotificationRegion)
BRIDGE_DECL(sceGxmGetParameterBufferThreshold)
BRIDGE_DECL(sceGxmGetPrecomputedDrawSize)
BRIDGE_DECL(sceGxmGetPrecomputedFragmentStateSize)
BRIDGE_DECL(sceGxmGetPrecomputedVertexStateSize)
BRIDGE_DECL(sceGxmGetRenderTargetMemSize)
BRIDGE_DECL(sceGxmInitialize)
BRIDGE_DECL(sceGxmIsDebugVersion)
BRIDGE_DECL(sceGxmMapFragmentUsseMemory)
BRIDGE_DECL(sceGxmMapMemory)
BRIDGE_DECL(sceGxmMapVertexUsseMemory)
BRIDGE_DECL(sceGxmMidSceneFlush)
BRIDGE_DECL(sceGxmNotificationWait)
BRIDGE_DECL(sceGxmPadHeartbeat)
BRIDGE_DECL(sceGxmPadTriggerGpuPaTrace)
BRIDGE_DECL(sceGxmPopUserMarker)
BRIDGE_DECL(sceGxmPrecomputedDrawInit)
BRIDGE_DECL(sceGxmPrecomputedDrawSetAllVertexStreams)
BRIDGE_DECL(sceGxmPrecomputedDrawSetParams)
BRIDGE_DECL(sceGxmPrecomputedDrawSetParamsInstanced)
BRIDGE_DECL(sceGxmPrecomputedDrawSetVertexStream)
BRIDGE_DECL(sceGxmPrecomputedFragmentStateGetDefaultUniformBuffer)
BRIDGE_DECL(sceGxmPrecomputedFragmentStateInit)
BRIDGE_DECL(sceGxmPrecomputedFragmentStateSetAllAuxiliarySurfaces)
BRIDGE_DECL(sceGxmPrecomputedFragmentStateSetAllTextures)
BRIDGE_DECL(sceGxmPrecomputedFragmentStateSetAllUniformBuffers)
BRIDGE_DECL(sceGxmPrecomputedFragmentStateSetDefaultUniformBuffer)
BRIDGE_DECL(sceGxmPrecomputedFragmentStateSetTexture)
BRIDGE_DECL(sceGxmPrecomputedFragmentStateSetUniformBuffer)
BRIDGE_DECL(sceGxmPrecomputedVertexStateGetDefaultUniformBuffer)
BRIDGE_DECL(sceGxmPrecomputedVertexStateInit)
BRIDGE_DECL(sceGxmPrecomputedVertexStateSetAllTextures)
BRIDGE_DECL(sceGxmPrecomputedVertexStateSetAllUniformBuffers)
BRIDGE_DECL(sceGxmPrecomputedVertexStateSetDefaultUniformBuffer)
BRIDGE_DECL(sceGxmPrecomputedVertexStateSetTexture)
BRIDGE_DECL(sceGxmPrecomputedVertexStateSetUniformBuffer)
BRIDGE_DECL(sceGxmProgramCheck)
BRIDGE_DECL(sceGxmProgramFindParameterByName)
BRIDGE_DECL(sceGxmProgramFindParameterBySemantic)
BRIDGE_DECL(_sceGxmProgramFindParameterBySemantic)
BRIDGE_DECL(sceGxmProgramGetDefaultUniformBufferSize)
BRIDGE_DECL(sceGxmProgramGetFragmentProgramInputs)
BRIDGE_DECL(sceGxmProgramGetOutputRegisterFormat)
BRIDGE_DECL(sceGxmProgramGetParameter)
BRIDGE_DECL(sceGxmProgramGetParameterCount)
BRIDGE_DECL(sceGxmProgramGetSize)
BRIDGE_DECL(sceGxmProgramGetType)
BRIDGE_DECL(sceGxmProgramGetVertexProgramOutputs)
BRIDGE_DECL(sceGxmProgramIsDepthReplaceUsed)
BRIDGE_DECL(sceGxmProgramIsDiscardUsed)
BRIDGE_DECL(sceGxmProgramIsEquivalent)
BRIDGE_DECL(sceGxmProgramIsFragColorUsed)
BRIDGE_DECL(sceGxmProgramIsNativeColorUsed)
BRIDGE_DECL(sceGxmProgramIsSpriteCoordUsed)
BRIDGE_DECL(sceGxmProgramParameterGetArraySize)
BRIDGE_DECL(sceGxmProgramParameterGetCategory)
BRIDGE_DECL(sceGxmProgramParameterGetComponentCount)
BRIDGE_DECL(sceGxmProgramParameterGetContainerIndex)
BRIDGE_DECL(sceGxmProgramParameterGetIndex)
BRIDGE_DECL(sceGxmProgramParameterGetName)
BRIDGE_DECL(sceGxmProgramParameterGetResourceIndex)
BRIDGE_DECL(sceGxmProgramParameterGetSemantic)
BRIDGE_DECL(_sceGxmProgramParameterGetSemantic)
BRIDGE_DECL(sceGxmProgramParameterGetSemanticIndex)
BRIDGE_DECL(sceGxmProgramParameterGetType)
BRIDGE_DECL(sceGxmProgramParameterIsRegFormat)
BRIDGE_DECL(sceGxmProgramParameterIsSamplerCube)
BRIDGE_DECL(sceGxmPushUserMarker)
BRIDGE_DECL(sceGxmRemoveRazorGpuCaptureBuffer)
BRIDGE_DECL(sceGxmRenderTargetGetDriverMemBlock)
BRIDGE_DECL(sceGxmRenderTargetGetHostMem)
BRIDGE_DECL(sceGxmReserveFragmentDefaultUniformBuffer)
BRIDGE_DECL(sceGxmReserveVertexDefaultUniformBuffer)
BRIDGE_DECL(sceGxmSetAuxiliarySurface)
BRIDGE_DECL(sceGxmSetBackDepthBias)
BRIDGE_DECL(sceGxmSetBackDepthFunc)
BRIDGE_DECL(sceGxmSetBackDepthWriteEnable)
BRIDGE_DECL(sceGxmSetBackFragmentProgramEnable)
BRIDGE_DECL(sceGxmSetBackLineFillLastPixelEnable)
BRIDGE_DECL(sceGxmSetBackPointLineWidth)
BRIDGE_DECL(sceGxmSetBackPolygonMode)
BRIDGE_DECL(sceGxmSetBackStencilFunc)
BRIDGE_DECL(sceGxmSetBackStencilRef)
BRIDGE_DECL(sceGxmSetBackVisibilityTestEnable)
BRIDGE_DECL(sceGxmSetBackVisibilityTestIndex)
BRIDGE_DECL(sceGxmSetBackVisibilityTestOp)
BRIDGE_DECL(sceGxmSetCullMode)
BRIDGE_DECL(sceGxmSetDefaultRegionClipAndViewport)
BRIDGE_DECL(sceGxmSetDeferredContextFragmentBuffer)
BRIDGE_DECL(sceGxmSetDeferredContextVdmBuffer)
BRIDGE_DECL(sceGxmSetDeferredContextVertexBuffer)
BRIDGE_DECL(sceGxmSetFragmentDefaultUniformBuffer)
BRIDGE_DECL(sceGxmSetFragmentProgram)
BRIDGE_DECL(sceGxmSetFragmentTexture)
BRIDGE_DECL(sceGxmSetFragmentUniformBuffer)
BRIDGE_DECL(sceGxmSetFrontDepthBias)
BRIDGE_DECL(sceGxmSetFrontDepthFunc)
BRIDGE_DECL(sceGxmSetFrontDepthWriteEnable)
BRIDGE_DECL(sceGxmSetFrontFragmentProgramEnable)
BRIDGE_DECL(sceGxmSetFrontLineFillLastPixelEnable)
BRIDGE_DECL(sceGxmSetFrontPointLineWidth)
BRIDGE_DECL(sceGxmSetFrontPolygonMode)
BRIDGE_DECL(sceGxmSetFrontStencilFunc)
BRIDGE_DECL(sceGxmSetFrontStencilRef)
BRIDGE_DECL(sceGxmSetFrontVisibilityTestEnable)
BRIDGE_DECL(sceGxmSetFrontVisibilityTestIndex)
BRIDGE_DECL(sceGxmSetFrontVisibilityTestOp)
BRIDGE_DECL(sceGxmSetPrecomputedFragmentState)
BRIDGE_DECL(sceGxmSetPrecomputedVertexState)
BRIDGE_DECL(sceGxmSetRegionClip)
BRIDGE_DECL(sceGxmSetTwoSidedEnable)
BRIDGE_DECL(sceGxmSetUniformDataF)
BRIDGE_DECL(sceGxmSetUserMarker)
BRIDGE_DECL(sceGxmSetValidationEnable)
BRIDGE_DECL(sceGxmSetVertexDefaultUniformBuffer)
BRIDGE_DECL(sceGxmSetVertexProgram)
BRIDGE_DECL(sceGxmSetVertexStream)
BRIDGE_DECL(sceGxmSetVertexTexture)
BRIDGE_DECL(_sceGxmSetVertexTexture)
BRIDGE_DECL(sceGxmSetVertexUniformBuffer)
BRIDGE_DECL(sceGxmSetViewport)
BRIDGE_DECL(sceGxmSetViewportEnable)
BRIDGE_DECL(sceGxmSetVisibilityBuffer)
BRIDGE_DECL(sceGxmSetWBufferEnable)
BRIDGE_DECL(sceGxmSetWClampEnable)
BRIDGE_DECL(sceGxmSetWClampValue)
BRIDGE_DECL(sceGxmSetWarningEnabled)
BRIDGE_DECL(sceGxmSetYuvProfile)
BRIDGE_DECL(sceGxmShaderPatcherAddRefFragmentProgram)
BRIDGE_DECL(sceGxmShaderPatcherAddRefVertexProgram)
BRIDGE_DECL(sceGxmShaderPatcherCreate)
BRIDGE_DECL(sceGxmShaderPatcherCreateFragmentProgram)
BRIDGE_DECL(sceGxmShaderPatcherCreateMaskUpdateFragmentProgram)
BRIDGE_DECL(sceGxmShaderPatcherCreateVertexProgram)
BRIDGE_DECL(sceGxmShaderPatcherDestroy)
BRIDGE_DECL(sceGxmShaderPatcherForceUnregisterProgram)
BRIDGE_DECL(sceGxmShaderPatcherGetBufferMemAllocated)
BRIDGE_DECL(sceGxmShaderPatcherGetFragmentProgramRefCount)
BRIDGE_DECL(sceGxmShaderPatcherGetFragmentUsseMemAllocated)
BRIDGE_DECL(sceGxmShaderPatcherGetHostMemAllocated)
BRIDGE_DECL(sceGxmShaderPatcherGetProgramFromId)
BRIDGE_DECL(sceGxmShaderPatcherGetUserData)
BRIDGE_DECL(sceGxmShaderPatcherGetVertexProgramRefCount)
BRIDGE_DECL(sceGxmShaderPatcherGetVertexUsseMemAllocated)
BRIDGE_DECL(sceGxmShaderPatcherRegisterProgram)
BRIDGE_DECL(sceGxmShaderPatcherReleaseFragmentProgram)
BRIDGE_DECL(sceGxmShaderPatcherReleaseVertexProgram)
BRIDGE_DECL(sceGxmShaderPatcherSetAuxiliarySurface)
BRIDGE_DECL(sceGxmShaderPatcherSetUserData)
BRIDGE_DECL(sceGxmShaderPatcherUnregisterProgram)
BRIDGE_DECL(sceGxmSyncObjectCreate)
BRIDGE_DECL(sceGxmSyncObjectDestroy)
BRIDGE_DECL(sceGxmTerminate)
BRIDGE_DECL(sceGxmTextureGetData)
BRIDGE_DECL(sceGxmTextureGetFormat)
BRIDGE_DECL(sceGxmTextureGetGammaMode)
BRIDGE_DECL(sceGxmTextureGetHeight)
BRIDGE_DECL(sceGxmTextureGetLodBias)
BRIDGE_DECL(sceGxmTextureGetLodMin)
BRIDGE_DECL(sceGxmTextureGetMagFilter)
BRIDGE_DECL(sceGxmTextureGetMinFilter)
BRIDGE_DECL(sceGxmTextureGetMipFilter)
BRIDGE_DECL(sceGxmTextureGetMipmapCount)
BRIDGE_DECL(sceGxmTextureGetMipmapCountUnsafe)
BRIDGE_DECL(sceGxmTextureGetNormalizeMode)
BRIDGE_DECL(sceGxmTextureGetPalette)
BRIDGE_DECL(sceGxmTextureGetStride)
BRIDGE_DECL(sceGxmTextureGetType)
BRIDGE_DECL(sceGxmTextureGetUAddrMode)
BRIDGE_DECL(sceGxmTextureGetUAddrModeSafe)
BRIDGE_DECL(sceGxmTextureGetVAddrMode)
BRIDGE_DECL(sceGxmTextureGetVAddrModeSafe)
BRIDGE_DECL(sceGxmTextureGetWidth)
BRIDGE_DECL(sceGxmTextureInitCube)
BRIDGE_DECL(sceGxmTextureInitCubeArbitrary)
BRIDGE_DECL(sceGxmTextureInitLinear)
BRIDGE_DECL(sceGxmTextureInitLinearStrided)
BRIDGE_DECL(sceGxmTextureInitSwizzled)
BRIDGE_DECL(sceGxmTextureInitSwizzledArbitrary)
BRIDGE_DECL(sceGxmTextureInitTiled)
BRIDGE_DECL(sceGxmTextureSetData)
BRIDGE_DECL(sceGxmTextureSetFormat)
BRIDGE_DECL(sceGxmTextureSetGammaMode)
BRIDGE_DECL(sceGxmTextureSetHeight)
BRIDGE_DECL(sceGxmTextureSetLodBias)
BRIDGE_DECL(sceGxmTextureSetLodMin)
BRIDGE_DECL(sceGxmTextureSetMagFilter)
BRIDGE_DECL(sceGxmTextureSetMinFilter)
BRIDGE_DECL(sceGxmTextureSetMipFilter)
BRIDGE_DECL(sceGxmTextureSetMipmapCount)
BRIDGE_DECL(sceGxmTextureSetNormalizeMode)
BRIDGE_DECL(sceGxmTextureSetPalette)
BRIDGE_DECL(sceGxmTextureSetStride)
BRIDGE_DECL(sceGxmTextureSetUAddrMode)
BRIDGE_DECL(sceGxmTextureSetUAddrModeSafe)
BRIDGE_DECL(sceGxmTextureSetVAddrMode)
BRIDGE_DECL(sceGxmTextureSetVAddrModeSafe)
BRIDGE_DECL(sceGxmTextureSetWidth)
BRIDGE_DECL(sceGxmTextureValidate)
BRIDGE_DECL(sceGxmTransferCopy)
BRIDGE_DECL(sceGxmTransferDownscale)
BRIDGE_DECL(sceGxmTransferFill)
BRIDGE_DECL(sceGxmTransferFinish)
BRIDGE_DECL(sceGxmUnmapFragmentUsseMemory)
BRIDGE_DECL(sceGxmUnmapMemory)
BRIDGE_DECL(sceGxmUnmapVertexUsseMemory)
BRIDGE_DECL(sceGxmVertexFence)
BRIDGE_DECL(sceGxmVertexProgramGetProgram)
BRIDGE_DECL(sceGxmWaitEvent)
