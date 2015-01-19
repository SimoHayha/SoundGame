#include "FileSystem.h"
#include "AudioSystem.h"
#include "GraphicsSystem.h"
#include "GameManager.h"

GameManager::GameManager() :
m_audioSystem(nullptr),
m_fileSystem(nullptr),
m_graphicsSystem(nullptr)
{
}

GameManager::~GameManager()
{
}

bool GameManager::Initialize(int , char*[])
{
	m_audioSystem.reset(new(std::nothrow) AudioSystem);
	m_fileSystem.reset(new(std::nothrow) FileSystem);
	m_graphicsSystem.reset(new(std::nothrow) GraphicsSystem);

	if (!m_audioSystem.get() || !m_audioSystem->Initialize())
		return false;

	m_fileSystem->AddExtension(".mp3");
	if (!m_fileSystem.get() || !m_fileSystem->Initialize())
		return false;

	if (!m_graphicsSystem.get() || !m_graphicsSystem->Initialize())
		return false;

	return true;
}

void GameManager::Shutdown()
{
	m_audioSystem->Shutdown();
	m_fileSystem->Shutdown();
	m_graphicsSystem->Shutdown();

	m_audioSystem.reset(nullptr);
	m_fileSystem.reset(nullptr);
	m_graphicsSystem.reset(nullptr);
}

bool GameManager::HandleInput()
{
	return true;
}

bool GameManager::Update()
{
	return true;
}

bool GameManager::Render()
{
	return true;
}

bool GameManager::IsAlive() const
{
	return true;
}

AudioSystem* GameManager::GetAudioSystem()
{
	return m_audioSystem.get();
}

FileSystem* GameManager::GetFileSystem()
{
	return m_fileSystem.get();
}

GraphicsSystem* GameManager::GetGraphicsSystem()
{
	return m_graphicsSystem.get();
}
