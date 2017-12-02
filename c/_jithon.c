// Copyright 2017 ibelie, Chen Jie, Joungtao. All rights reserved.
// Use of this source code is governed by The MIT License
// that can be found in the LICENSE file.

#include "jithon.h"

#ifdef __cplusplus
extern "C" {
#endif

int Jithon_RunPython(const char* name, PyObject* args) {
	IblPrint_Err("[Jithon] Not implemented: run python.\n");
	return -1;
	// neox::python::IPython* python = neox::InterfaceBox::Instance().m_python;
	// return python->XRunFunction("jithon", "delegate", "", 0, "(sO)", name, args);
}

char* Jithon_ReadFile(const char* filename) {
	IblPrint_Err("[Jithon] Not implemented: read file.\n");
	return NULL;
	// std::string pathStr(JithonPath);
	// neox::game::IFile *file = neox::InterfaceBox::Instance().m_res_file_sys->Open((pathStr + "/" + filename + ".js").c_str());
	// if (file == 0) { return NULL; }
	//
	// int size = file->Length();
	// char* buf = (char*)calloc(size + 1, sizeof(char));
	// if (buf) {
	// 	memcpy(buf, file->Buffer(), size * sizeof(char));
	// }
	// file->Close();
	// return buf;
}

#ifdef __cplusplus
}
#endif
