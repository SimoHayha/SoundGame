#pragma once

#include "Component.h"

class RenderComponent : public Component
{
public:
	RenderComponent();
	virtual ~RenderComponent();

	virtual bool Initialize() override;
	virtual void Shutdown() override;
};