#include "Node.h"
#include "Scene.h"

Scene::Scene() :
m_root(nullptr)
{
}

Scene::~Scene()
{
}

bool Scene::Initialize()
{
	return true;
}

void Scene::Shutdown()
{
}
