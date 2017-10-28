#pragma once
#include"cocos2d.h"
#include"BackgroundLayer.h"
#include"FishLayer.h"
#include"MenuLayer.h"
using namespace cocos2d;
/*��Ϸ������*/
class GameScene :public cocos2d::CCScene
{
public:
	GameScene(void);
	CREATE_FUNC(GameScene)
	~GameScene();
	/*��ʼ����������ɸ�����Ĵ����ͼ���*/
	virtual bool init(void);
protected:
	/*���ݳ�Ա*/
	BackgroundLayer::Layer * backgroundLayer;/*������*/
	//CannonLayer *cannonLayer;/*��̨��*/
	FishLayer::Layer *fishLayer;/*���*/
	//PaneLayer *paneLayer;/*���ܲ�*/
	MenuLayer *menuLayer;/*�˵���*/
	

};

