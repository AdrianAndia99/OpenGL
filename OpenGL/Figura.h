#pragma once
#include "Transform.h"
#include "Material.h"
class Figura
{
public:
	Figura();
	Transform transform;
	
	Material* material;
	void initMaterial(const char* fileName);
	virtual void Render() = 0;
};