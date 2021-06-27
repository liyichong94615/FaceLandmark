#include "pch.h"
#include "Face.h"


facemesh* CreateFace(string path) {
	return new facemesh(path);
}

void DeleteFace(facemesh* obj) {
	delete obj;
	obj = nullptr;
}