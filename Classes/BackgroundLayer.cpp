#include "BackgroundLayer.h"
USING_NS_CC;

BackgroundLayer::BackgroundLayer()
{
}


BackgroundLayer::~BackgroundLayer()
{
}

bool BackgroundLayer::init()
{
	if (!cocos2d::Layer::init())
	{
		return false;
	}
	/*��ȡ���ڴ�С*/
	auto WindowsSize = Director::getInstance()->getVisibleSize();
	
	
	/*����һ�����鱳��ͼ*/
	auto *bgSprite = Sprite::create("bj01_01-ipadhd.png");
	
	
	/*�Ѿ���ӵ�����ӽڵ�*/
	this->addChild(bgSprite);
	
	
	/*���ñ���ͼ��ʾλ�ã������λ���ڴ��ڵ����ģ�*/
	bgSprite->setPosition(WindowsSize.width / 2, WindowsSize.height / 2);
	return true;
}