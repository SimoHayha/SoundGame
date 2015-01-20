#include "Node.h"

Node::Node() :
m_parents(nullptr),
m_worldTransform(),
m_relTransform()
{
}

Node::~Node()
{
}

Node* Node::GetParent() const
{
	return m_parents;
}

Node* Node::GetChild(int index) const
{
	return m_childs[index];
}

int Node::GetChildCount() const
{
	return static_cast<int>(m_childs.size());
}

void Node::AddChild(Node* node)
{
	m_childs.push_back(node);
}

void Node::RemoveChild(Node* node)
{
	auto	it = m_childs.begin();
	while (it != m_childs.end())
	{
		if (*it == node)
		{
			m_childs.erase(it);
			break;
		}
		++it;
	}
}

