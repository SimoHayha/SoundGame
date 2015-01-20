#pragma once

#include <vector>

#include <SFML/Graphics/Transform.hpp>

class Node
{
public:
	Node();
	virtual ~Node();

	Node*	GetParent() const;
	Node*	GetChild(int index) const;
	int		GetChildCount() const;
	void	AddChild(Node* node);
	void	RemoveChild(Node* node);

protected:
	Node*				m_parents;
	std::vector<Node*>	m_childs;

	sf::Transform	m_worldTransform;
	sf::Transform	m_relTransform;
};