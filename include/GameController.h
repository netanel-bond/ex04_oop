
#include "DisplayObject.h"
#include <vector>
#include <string>
#include<King.h>
#include<Mage.h>
#include <Thief.h>
#include <Obstacle.h>
#include<Warrioir.h>
#pragma once

using std::vector;
class GameController
{
public:
	GameController();
	DisplayObject*& getObject(int index);
private:
	DisplayObject* m_objects[11];
	//		paths to images
	const vector<string> m_imagesPath = { "king_image.png", "mage_image.png","warrior_image.png",
										"thief_image.png", "wall_image.png","gate_image.png",
										"fire_image.png", "ork_image.jpg", "key_image.png",
										"teleport_image.png", "throne_image.png" };
};