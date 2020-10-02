#pragma once
#ifndef __GAME_OBJECT__
#define __GAME_OBJECT__

#include "PluginSettings.h"
#include "Vector3D.h"

class PLUGIN_API GameObject
{
public:
	// Constructor
	GameObject();
	
	// Getters and Setters
	int GetID() const;
	void SetID(int id = 0);
	
	Vector3D GetPosition() const;
	void SetPosition(float x = 0.0f, float y = 0.0f, float z = 0.0f);

	
private:
	int m_id;
	Vector3D m_position;
	
};

#endif /* defined (__GAME_OBJECT__) */


