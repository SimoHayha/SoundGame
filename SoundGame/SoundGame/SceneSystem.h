#pragma once

#include "System.h"

class SceneSystem : public System
{
public:
	SceneSystem();
	virtual ~SceneSystem();

	virtual bool Initialize() override;
	virtual bool Update(float dt) override;
	virtual void Shutdown() override;
};