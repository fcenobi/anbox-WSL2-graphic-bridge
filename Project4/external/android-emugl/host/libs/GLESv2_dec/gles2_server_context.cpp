// Generated Code - DO NOT EDIT !!
// generated by 'emugen'


#include <string.h>
#include "gles2_server_context.h"


#include <stdio.h>

int gles2_server_context_t::initDispatchByName(void *(*getProc)(const char *, void *userData), void *userData)
{
	glActiveTexture = (glActiveTexture_server_proc_t) getProc("glActiveTexture", userData);
	glAttachShader = (glAttachShader_server_proc_t) getProc("glAttachShader", userData);
	glBindAttribLocation = (glBindAttribLocation_server_proc_t) getProc("glBindAttribLocation", userData);
	glBindBuffer = (glBindBuffer_server_proc_t) getProc("glBindBuffer", userData);
	glBindFramebuffer = (glBindFramebuffer_server_proc_t) getProc("glBindFramebuffer", userData);
	glBindRenderbuffer = (glBindRenderbuffer_server_proc_t) getProc("glBindRenderbuffer", userData);
	glBindTexture = (glBindTexture_server_proc_t) getProc("glBindTexture", userData);
	glBlendColor = (glBlendColor_server_proc_t) getProc("glBlendColor", userData);
	glBlendEquation = (glBlendEquation_server_proc_t) getProc("glBlendEquation", userData);
	glBlendEquationSeparate = (glBlendEquationSeparate_server_proc_t) getProc("glBlendEquationSeparate", userData);
	glBlendFunc = (glBlendFunc_server_proc_t) getProc("glBlendFunc", userData);
	glBlendFuncSeparate = (glBlendFuncSeparate_server_proc_t) getProc("glBlendFuncSeparate", userData);
	glBufferData = (glBufferData_server_proc_t) getProc("glBufferData", userData);
	glBufferSubData = (glBufferSubData_server_proc_t) getProc("glBufferSubData", userData);
	glCheckFramebufferStatus = (glCheckFramebufferStatus_server_proc_t) getProc("glCheckFramebufferStatus", userData);
	glClear = (glClear_server_proc_t) getProc("glClear", userData);
	glClearColor = (glClearColor_server_proc_t) getProc("glClearColor", userData);
	glClearDepthf = (glClearDepthf_server_proc_t) getProc("glClearDepthf", userData);
	glClearStencil = (glClearStencil_server_proc_t) getProc("glClearStencil", userData);
	glColorMask = (glColorMask_server_proc_t) getProc("glColorMask", userData);
	glCompileShader = (glCompileShader_server_proc_t) getProc("glCompileShader", userData);
	glCompressedTexImage2D = (glCompressedTexImage2D_server_proc_t) getProc("glCompressedTexImage2D", userData);
	glCompressedTexSubImage2D = (glCompressedTexSubImage2D_server_proc_t) getProc("glCompressedTexSubImage2D", userData);
	glCopyTexImage2D = (glCopyTexImage2D_server_proc_t) getProc("glCopyTexImage2D", userData);
	glCopyTexSubImage2D = (glCopyTexSubImage2D_server_proc_t) getProc("glCopyTexSubImage2D", userData);
	glCreateProgram = (glCreateProgram_server_proc_t) getProc("glCreateProgram", userData);
	glCreateShader = (glCreateShader_server_proc_t) getProc("glCreateShader", userData);
	glCullFace = (glCullFace_server_proc_t) getProc("glCullFace", userData);
	glDeleteBuffers = (glDeleteBuffers_server_proc_t) getProc("glDeleteBuffers", userData);
	glDeleteFramebuffers = (glDeleteFramebuffers_server_proc_t) getProc("glDeleteFramebuffers", userData);
	glDeleteProgram = (glDeleteProgram_server_proc_t) getProc("glDeleteProgram", userData);
	glDeleteRenderbuffers = (glDeleteRenderbuffers_server_proc_t) getProc("glDeleteRenderbuffers", userData);
	glDeleteShader = (glDeleteShader_server_proc_t) getProc("glDeleteShader", userData);
	glDeleteTextures = (glDeleteTextures_server_proc_t) getProc("glDeleteTextures", userData);
	glDepthFunc = (glDepthFunc_server_proc_t) getProc("glDepthFunc", userData);
	glDepthMask = (glDepthMask_server_proc_t) getProc("glDepthMask", userData);
	glDepthRangef = (glDepthRangef_server_proc_t) getProc("glDepthRangef", userData);
	glDetachShader = (glDetachShader_server_proc_t) getProc("glDetachShader", userData);
	glDisable = (glDisable_server_proc_t) getProc("glDisable", userData);
	glDisableVertexAttribArray = (glDisableVertexAttribArray_server_proc_t) getProc("glDisableVertexAttribArray", userData);
	glDrawArrays = (glDrawArrays_server_proc_t) getProc("glDrawArrays", userData);
	glDrawElements = (glDrawElements_server_proc_t) getProc("glDrawElements", userData);
	glEnable = (glEnable_server_proc_t) getProc("glEnable", userData);
	glEnableVertexAttribArray = (glEnableVertexAttribArray_server_proc_t) getProc("glEnableVertexAttribArray", userData);
	glFinish = (glFinish_server_proc_t) getProc("glFinish", userData);
	glFlush = (glFlush_server_proc_t) getProc("glFlush", userData);
	glFramebufferRenderbuffer = (glFramebufferRenderbuffer_server_proc_t) getProc("glFramebufferRenderbuffer", userData);
	glFramebufferTexture2D = (glFramebufferTexture2D_server_proc_t) getProc("glFramebufferTexture2D", userData);
	glFrontFace = (glFrontFace_server_proc_t) getProc("glFrontFace", userData);
	glGenBuffers = (glGenBuffers_server_proc_t) getProc("glGenBuffers", userData);
	glGenerateMipmap = (glGenerateMipmap_server_proc_t) getProc("glGenerateMipmap", userData);
	glGenFramebuffers = (glGenFramebuffers_server_proc_t) getProc("glGenFramebuffers", userData);
	glGenRenderbuffers = (glGenRenderbuffers_server_proc_t) getProc("glGenRenderbuffers", userData);
	glGenTextures = (glGenTextures_server_proc_t) getProc("glGenTextures", userData);
	glGetActiveAttrib = (glGetActiveAttrib_server_proc_t) getProc("glGetActiveAttrib", userData);
	glGetActiveUniform = (glGetActiveUniform_server_proc_t) getProc("glGetActiveUniform", userData);
	glGetAttachedShaders = (glGetAttachedShaders_server_proc_t) getProc("glGetAttachedShaders", userData);
	glGetAttribLocation = (glGetAttribLocation_server_proc_t) getProc("glGetAttribLocation", userData);
	glGetBooleanv = (glGetBooleanv_server_proc_t) getProc("glGetBooleanv", userData);
	glGetBufferParameteriv = (glGetBufferParameteriv_server_proc_t) getProc("glGetBufferParameteriv", userData);
	glGetError = (glGetError_server_proc_t) getProc("glGetError", userData);
	glGetFloatv = (glGetFloatv_server_proc_t) getProc("glGetFloatv", userData);
	glGetFramebufferAttachmentParameteriv = (glGetFramebufferAttachmentParameteriv_server_proc_t) getProc("glGetFramebufferAttachmentParameteriv", userData);
	glGetIntegerv = (glGetIntegerv_server_proc_t) getProc("glGetIntegerv", userData);
	glGetProgramiv = (glGetProgramiv_server_proc_t) getProc("glGetProgramiv", userData);
	glGetProgramInfoLog = (glGetProgramInfoLog_server_proc_t) getProc("glGetProgramInfoLog", userData);
	glGetRenderbufferParameteriv = (glGetRenderbufferParameteriv_server_proc_t) getProc("glGetRenderbufferParameteriv", userData);
	glGetShaderiv = (glGetShaderiv_server_proc_t) getProc("glGetShaderiv", userData);
	glGetShaderInfoLog = (glGetShaderInfoLog_server_proc_t) getProc("glGetShaderInfoLog", userData);
	glGetShaderPrecisionFormat = (glGetShaderPrecisionFormat_server_proc_t) getProc("glGetShaderPrecisionFormat", userData);
	glGetShaderSource = (glGetShaderSource_server_proc_t) getProc("glGetShaderSource", userData);
	glGetString = (glGetString_server_proc_t) getProc("glGetString", userData);
	glGetTexParameterfv = (glGetTexParameterfv_server_proc_t) getProc("glGetTexParameterfv", userData);
	glGetTexParameteriv = (glGetTexParameteriv_server_proc_t) getProc("glGetTexParameteriv", userData);
	glGetUniformfv = (glGetUniformfv_server_proc_t) getProc("glGetUniformfv", userData);
	glGetUniformiv = (glGetUniformiv_server_proc_t) getProc("glGetUniformiv", userData);
	glGetUniformLocation = (glGetUniformLocation_server_proc_t) getProc("glGetUniformLocation", userData);
	glGetVertexAttribfv = (glGetVertexAttribfv_server_proc_t) getProc("glGetVertexAttribfv", userData);
	glGetVertexAttribiv = (glGetVertexAttribiv_server_proc_t) getProc("glGetVertexAttribiv", userData);
	glGetVertexAttribPointerv = (glGetVertexAttribPointerv_server_proc_t) getProc("glGetVertexAttribPointerv", userData);
	glHint = (glHint_server_proc_t) getProc("glHint", userData);
	glIsBuffer = (glIsBuffer_server_proc_t) getProc("glIsBuffer", userData);
	glIsEnabled = (glIsEnabled_server_proc_t) getProc("glIsEnabled", userData);
	glIsFramebuffer = (glIsFramebuffer_server_proc_t) getProc("glIsFramebuffer", userData);
	glIsProgram = (glIsProgram_server_proc_t) getProc("glIsProgram", userData);
	glIsRenderbuffer = (glIsRenderbuffer_server_proc_t) getProc("glIsRenderbuffer", userData);
	glIsShader = (glIsShader_server_proc_t) getProc("glIsShader", userData);
	glIsTexture = (glIsTexture_server_proc_t) getProc("glIsTexture", userData);
	glLineWidth = (glLineWidth_server_proc_t) getProc("glLineWidth", userData);
	glLinkProgram = (glLinkProgram_server_proc_t) getProc("glLinkProgram", userData);
	glPixelStorei = (glPixelStorei_server_proc_t) getProc("glPixelStorei", userData);
	glPolygonOffset = (glPolygonOffset_server_proc_t) getProc("glPolygonOffset", userData);
	glReadPixels = (glReadPixels_server_proc_t) getProc("glReadPixels", userData);
	glReleaseShaderCompiler = (glReleaseShaderCompiler_server_proc_t) getProc("glReleaseShaderCompiler", userData);
	glRenderbufferStorage = (glRenderbufferStorage_server_proc_t) getProc("glRenderbufferStorage", userData);
	glSampleCoverage = (glSampleCoverage_server_proc_t) getProc("glSampleCoverage", userData);
	glScissor = (glScissor_server_proc_t) getProc("glScissor", userData);
	glShaderBinary = (glShaderBinary_server_proc_t) getProc("glShaderBinary", userData);
	glShaderSource = (glShaderSource_server_proc_t) getProc("glShaderSource", userData);
	glStencilFunc = (glStencilFunc_server_proc_t) getProc("glStencilFunc", userData);
	glStencilFuncSeparate = (glStencilFuncSeparate_server_proc_t) getProc("glStencilFuncSeparate", userData);
	glStencilMask = (glStencilMask_server_proc_t) getProc("glStencilMask", userData);
	glStencilMaskSeparate = (glStencilMaskSeparate_server_proc_t) getProc("glStencilMaskSeparate", userData);
	glStencilOp = (glStencilOp_server_proc_t) getProc("glStencilOp", userData);
	glStencilOpSeparate = (glStencilOpSeparate_server_proc_t) getProc("glStencilOpSeparate", userData);
	glTexImage2D = (glTexImage2D_server_proc_t) getProc("glTexImage2D", userData);
	glTexParameterf = (glTexParameterf_server_proc_t) getProc("glTexParameterf", userData);
	glTexParameterfv = (glTexParameterfv_server_proc_t) getProc("glTexParameterfv", userData);
	glTexParameteri = (glTexParameteri_server_proc_t) getProc("glTexParameteri", userData);
	glTexParameteriv = (glTexParameteriv_server_proc_t) getProc("glTexParameteriv", userData);
	glTexSubImage2D = (glTexSubImage2D_server_proc_t) getProc("glTexSubImage2D", userData);
	glUniform1f = (glUniform1f_server_proc_t) getProc("glUniform1f", userData);
	glUniform1fv = (glUniform1fv_server_proc_t) getProc("glUniform1fv", userData);
	glUniform1i = (glUniform1i_server_proc_t) getProc("glUniform1i", userData);
	glUniform1iv = (glUniform1iv_server_proc_t) getProc("glUniform1iv", userData);
	glUniform2f = (glUniform2f_server_proc_t) getProc("glUniform2f", userData);
	glUniform2fv = (glUniform2fv_server_proc_t) getProc("glUniform2fv", userData);
	glUniform2i = (glUniform2i_server_proc_t) getProc("glUniform2i", userData);
	glUniform2iv = (glUniform2iv_server_proc_t) getProc("glUniform2iv", userData);
	glUniform3f = (glUniform3f_server_proc_t) getProc("glUniform3f", userData);
	glUniform3fv = (glUniform3fv_server_proc_t) getProc("glUniform3fv", userData);
	glUniform3i = (glUniform3i_server_proc_t) getProc("glUniform3i", userData);
	glUniform3iv = (glUniform3iv_server_proc_t) getProc("glUniform3iv", userData);
	glUniform4f = (glUniform4f_server_proc_t) getProc("glUniform4f", userData);
	glUniform4fv = (glUniform4fv_server_proc_t) getProc("glUniform4fv", userData);
	glUniform4i = (glUniform4i_server_proc_t) getProc("glUniform4i", userData);
	glUniform4iv = (glUniform4iv_server_proc_t) getProc("glUniform4iv", userData);
	glUniformMatrix2fv = (glUniformMatrix2fv_server_proc_t) getProc("glUniformMatrix2fv", userData);
	glUniformMatrix3fv = (glUniformMatrix3fv_server_proc_t) getProc("glUniformMatrix3fv", userData);
	glUniformMatrix4fv = (glUniformMatrix4fv_server_proc_t) getProc("glUniformMatrix4fv", userData);
	glUseProgram = (glUseProgram_server_proc_t) getProc("glUseProgram", userData);
	glValidateProgram = (glValidateProgram_server_proc_t) getProc("glValidateProgram", userData);
	glVertexAttrib1f = (glVertexAttrib1f_server_proc_t) getProc("glVertexAttrib1f", userData);
	glVertexAttrib1fv = (glVertexAttrib1fv_server_proc_t) getProc("glVertexAttrib1fv", userData);
	glVertexAttrib2f = (glVertexAttrib2f_server_proc_t) getProc("glVertexAttrib2f", userData);
	glVertexAttrib2fv = (glVertexAttrib2fv_server_proc_t) getProc("glVertexAttrib2fv", userData);
	glVertexAttrib3f = (glVertexAttrib3f_server_proc_t) getProc("glVertexAttrib3f", userData);
	glVertexAttrib3fv = (glVertexAttrib3fv_server_proc_t) getProc("glVertexAttrib3fv", userData);
	glVertexAttrib4f = (glVertexAttrib4f_server_proc_t) getProc("glVertexAttrib4f", userData);
	glVertexAttrib4fv = (glVertexAttrib4fv_server_proc_t) getProc("glVertexAttrib4fv", userData);
	glVertexAttribPointer = (glVertexAttribPointer_server_proc_t) getProc("glVertexAttribPointer", userData);
	glViewport = (glViewport_server_proc_t) getProc("glViewport", userData);
	glEGLImageTargetTexture2DOES = (glEGLImageTargetTexture2DOES_server_proc_t) getProc("glEGLImageTargetTexture2DOES", userData);
	glEGLImageTargetRenderbufferStorageOES = (glEGLImageTargetRenderbufferStorageOES_server_proc_t) getProc("glEGLImageTargetRenderbufferStorageOES", userData);
	glGetProgramBinaryOES = (glGetProgramBinaryOES_server_proc_t) getProc("glGetProgramBinaryOES", userData);
	glProgramBinaryOES = (glProgramBinaryOES_server_proc_t) getProc("glProgramBinaryOES", userData);
	glMapBufferOES = (glMapBufferOES_server_proc_t) getProc("glMapBufferOES", userData);
	glUnmapBufferOES = (glUnmapBufferOES_server_proc_t) getProc("glUnmapBufferOES", userData);
	glTexImage3DOES = (glTexImage3DOES_server_proc_t) getProc("glTexImage3DOES", userData);
	glTexSubImage3DOES = (glTexSubImage3DOES_server_proc_t) getProc("glTexSubImage3DOES", userData);
	glCopyTexSubImage3DOES = (glCopyTexSubImage3DOES_server_proc_t) getProc("glCopyTexSubImage3DOES", userData);
	glCompressedTexImage3DOES = (glCompressedTexImage3DOES_server_proc_t) getProc("glCompressedTexImage3DOES", userData);
	glCompressedTexSubImage3DOES = (glCompressedTexSubImage3DOES_server_proc_t) getProc("glCompressedTexSubImage3DOES", userData);
	glFramebufferTexture3DOES = (glFramebufferTexture3DOES_server_proc_t) getProc("glFramebufferTexture3DOES", userData);
	glBindVertexArrayOES = (glBindVertexArrayOES_server_proc_t) getProc("glBindVertexArrayOES", userData);
	glDeleteVertexArraysOES = (glDeleteVertexArraysOES_server_proc_t) getProc("glDeleteVertexArraysOES", userData);
	glGenVertexArraysOES = (glGenVertexArraysOES_server_proc_t) getProc("glGenVertexArraysOES", userData);
	glIsVertexArrayOES = (glIsVertexArrayOES_server_proc_t) getProc("glIsVertexArrayOES", userData);
	glDiscardFramebufferEXT = (glDiscardFramebufferEXT_server_proc_t) getProc("glDiscardFramebufferEXT", userData);
	glMultiDrawArraysEXT = (glMultiDrawArraysEXT_server_proc_t) getProc("glMultiDrawArraysEXT", userData);
	glMultiDrawElementsEXT = (glMultiDrawElementsEXT_server_proc_t) getProc("glMultiDrawElementsEXT", userData);
	glGetPerfMonitorGroupsAMD = (glGetPerfMonitorGroupsAMD_server_proc_t) getProc("glGetPerfMonitorGroupsAMD", userData);
	glGetPerfMonitorCountersAMD = (glGetPerfMonitorCountersAMD_server_proc_t) getProc("glGetPerfMonitorCountersAMD", userData);
	glGetPerfMonitorGroupStringAMD = (glGetPerfMonitorGroupStringAMD_server_proc_t) getProc("glGetPerfMonitorGroupStringAMD", userData);
	glGetPerfMonitorCounterStringAMD = (glGetPerfMonitorCounterStringAMD_server_proc_t) getProc("glGetPerfMonitorCounterStringAMD", userData);
	glGetPerfMonitorCounterInfoAMD = (glGetPerfMonitorCounterInfoAMD_server_proc_t) getProc("glGetPerfMonitorCounterInfoAMD", userData);
	glGenPerfMonitorsAMD = (glGenPerfMonitorsAMD_server_proc_t) getProc("glGenPerfMonitorsAMD", userData);
	glDeletePerfMonitorsAMD = (glDeletePerfMonitorsAMD_server_proc_t) getProc("glDeletePerfMonitorsAMD", userData);
	glSelectPerfMonitorCountersAMD = (glSelectPerfMonitorCountersAMD_server_proc_t) getProc("glSelectPerfMonitorCountersAMD", userData);
	glBeginPerfMonitorAMD = (glBeginPerfMonitorAMD_server_proc_t) getProc("glBeginPerfMonitorAMD", userData);
	glEndPerfMonitorAMD = (glEndPerfMonitorAMD_server_proc_t) getProc("glEndPerfMonitorAMD", userData);
	glGetPerfMonitorCounterDataAMD = (glGetPerfMonitorCounterDataAMD_server_proc_t) getProc("glGetPerfMonitorCounterDataAMD", userData);
	glRenderbufferStorageMultisampleIMG = (glRenderbufferStorageMultisampleIMG_server_proc_t) getProc("glRenderbufferStorageMultisampleIMG", userData);
	glFramebufferTexture2DMultisampleIMG = (glFramebufferTexture2DMultisampleIMG_server_proc_t) getProc("glFramebufferTexture2DMultisampleIMG", userData);
	glDeleteFencesNV = (glDeleteFencesNV_server_proc_t) getProc("glDeleteFencesNV", userData);
	glGenFencesNV = (glGenFencesNV_server_proc_t) getProc("glGenFencesNV", userData);
	glIsFenceNV = (glIsFenceNV_server_proc_t) getProc("glIsFenceNV", userData);
	glTestFenceNV = (glTestFenceNV_server_proc_t) getProc("glTestFenceNV", userData);
	glGetFenceivNV = (glGetFenceivNV_server_proc_t) getProc("glGetFenceivNV", userData);
	glFinishFenceNV = (glFinishFenceNV_server_proc_t) getProc("glFinishFenceNV", userData);
	glSetFenceNV = (glSetFenceNV_server_proc_t) getProc("glSetFenceNV", userData);
	glCoverageMaskNV = (glCoverageMaskNV_server_proc_t) getProc("glCoverageMaskNV", userData);
	glCoverageOperationNV = (glCoverageOperationNV_server_proc_t) getProc("glCoverageOperationNV", userData);
	glGetDriverControlsQCOM = (glGetDriverControlsQCOM_server_proc_t) getProc("glGetDriverControlsQCOM", userData);
	glGetDriverControlStringQCOM = (glGetDriverControlStringQCOM_server_proc_t) getProc("glGetDriverControlStringQCOM", userData);
	glEnableDriverControlQCOM = (glEnableDriverControlQCOM_server_proc_t) getProc("glEnableDriverControlQCOM", userData);
	glDisableDriverControlQCOM = (glDisableDriverControlQCOM_server_proc_t) getProc("glDisableDriverControlQCOM", userData);
	glExtGetTexturesQCOM = (glExtGetTexturesQCOM_server_proc_t) getProc("glExtGetTexturesQCOM", userData);
	glExtGetBuffersQCOM = (glExtGetBuffersQCOM_server_proc_t) getProc("glExtGetBuffersQCOM", userData);
	glExtGetRenderbuffersQCOM = (glExtGetRenderbuffersQCOM_server_proc_t) getProc("glExtGetRenderbuffersQCOM", userData);
	glExtGetFramebuffersQCOM = (glExtGetFramebuffersQCOM_server_proc_t) getProc("glExtGetFramebuffersQCOM", userData);
	glExtGetTexLevelParameterivQCOM = (glExtGetTexLevelParameterivQCOM_server_proc_t) getProc("glExtGetTexLevelParameterivQCOM", userData);
	glExtTexObjectStateOverrideiQCOM = (glExtTexObjectStateOverrideiQCOM_server_proc_t) getProc("glExtTexObjectStateOverrideiQCOM", userData);
	glExtGetTexSubImageQCOM = (glExtGetTexSubImageQCOM_server_proc_t) getProc("glExtGetTexSubImageQCOM", userData);
	glExtGetBufferPointervQCOM = (glExtGetBufferPointervQCOM_server_proc_t) getProc("glExtGetBufferPointervQCOM", userData);
	glExtGetShadersQCOM = (glExtGetShadersQCOM_server_proc_t) getProc("glExtGetShadersQCOM", userData);
	glExtGetProgramsQCOM = (glExtGetProgramsQCOM_server_proc_t) getProc("glExtGetProgramsQCOM", userData);
	glExtIsProgramBinaryQCOM = (glExtIsProgramBinaryQCOM_server_proc_t) getProc("glExtIsProgramBinaryQCOM", userData);
	glExtGetProgramBinarySourceQCOM = (glExtGetProgramBinarySourceQCOM_server_proc_t) getProc("glExtGetProgramBinarySourceQCOM", userData);
	glStartTilingQCOM = (glStartTilingQCOM_server_proc_t) getProc("glStartTilingQCOM", userData);
	glEndTilingQCOM = (glEndTilingQCOM_server_proc_t) getProc("glEndTilingQCOM", userData);
	glVertexAttribPointerData = (glVertexAttribPointerData_server_proc_t) getProc("glVertexAttribPointerData", userData);
	glVertexAttribPointerOffset = (glVertexAttribPointerOffset_server_proc_t) getProc("glVertexAttribPointerOffset", userData);
	glDrawElementsOffset = (glDrawElementsOffset_server_proc_t) getProc("glDrawElementsOffset", userData);
	glDrawElementsData = (glDrawElementsData_server_proc_t) getProc("glDrawElementsData", userData);
	glGetCompressedTextureFormats = (glGetCompressedTextureFormats_server_proc_t) getProc("glGetCompressedTextureFormats", userData);
	glShaderString = (glShaderString_server_proc_t) getProc("glShaderString", userData);
	glFinishRoundTrip = (glFinishRoundTrip_server_proc_t) getProc("glFinishRoundTrip", userData);
	return 0;
}
