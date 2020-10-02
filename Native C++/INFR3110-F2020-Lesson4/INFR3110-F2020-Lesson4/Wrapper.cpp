#include "Wrapper.h"
#include "GameObject.h"

GameObject gameObject;

PLUGIN_API int GetID()
{
	return gameObject.GetID();
}

PLUGIN_API void SetID(const int id)
{
	gameObject.SetID(id);
}

PLUGIN_API Vector3D GetPosition()
{
	return gameObject.GetPosition();
}

PLUGIN_API void SetPosition(const float x, const float y, const float z)
{
	gameObject.SetPosition(x, y, z);
}

