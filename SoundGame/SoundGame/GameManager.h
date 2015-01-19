#pragma once

#include <memory>

class AudioSystem;
class FileSystem;
class GraphicsSystem;

class GameManager
{
public:
	GameManager();
	virtual ~GameManager();

	bool	Initialize(int ac, char* av[]);
	bool	HandleInput();
	bool	Update();
	bool	Render();
	void	Shutdown();

	bool	IsAlive() const;

	AudioSystem*	GetAudioSystem();
	FileSystem*		GetFileSystem();
	GraphicsSystem*	GetGraphicsSystem();

private:
	std::auto_ptr<AudioSystem>		m_audioSystem;
	std::auto_ptr<FileSystem>		m_fileSystem;
	std::auto_ptr<GraphicsSystem>	m_graphicsSystem;
};