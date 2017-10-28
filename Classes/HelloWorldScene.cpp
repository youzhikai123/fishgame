#include "HelloWorldScene.h"
#include "SimpleAudioEngine.h"

USING_NS_CC;

Scene* HelloWorld::createScene()
{
    return HelloWorld::create();
}

bool HelloWorld::init()
{

    if ( !Scene::init() )
    {
        return false;
    }
	/*getInstance���ʵ�� getVisiSize��ô��ڴ�С*/
    auto visibleSize = Director::getInstance()->getVisibleSize();
	/*Vec2�������� ����ԭ������*/
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

	/*MenuItemImage�˵���ť��ͼƬ�˵�MenuITEMImage����δ���ͼƬ�����������ͼƬ�������ص�����������������һ����ť*/
    auto closeItem = MenuItemImage::create(
                                           "CloseNormal.png",
                                           "CloseSelected.png",
                                           CC_CALLBACK_1(HelloWorld::menuCloseCallback, this));
	/*����closeItem��λ�ã�getContentSize��ͼƬ�Ĵ�С��*/
    closeItem->setPosition(Vec2(origin.x + visibleSize.width - closeItem->getContentSize().width/2 ,
		origin.y + closeItem->getContentSize().height / 2));

	/*�ڲ�������Ӳ˵���ķ�����
			1���Ѳ˵���(MenuItem)��ӽ��˵�(Menu)
			2���Ѳ˵�(Menu)�������Ӧ��(Layer)*/
    auto menu = Menu::create(closeItem, NULL);
    menu->setPosition(Vec2::ZERO);
    this->addChild(menu, 1);





    /*��ǩ���֣����壬�����С  auto ��������=Label::createWithTTF("��Ҫ��ʾ����", "Resources�ڵ�����", �����С)*/
	auto label = Label::createWithTTF("fishingJon", "fonts/Marker Felt.ttf", 24);
	
	/*��ǩ��λ��*/
	label->setPosition(Vec2(origin.x + visibleSize.width / 2,
		origin.y + visibleSize.height - label->getContentSize().height));
	/*�ѱ�ǩ��ӵ�������*/
    this->addChild(label, 1);




	/*����һ�����鱳��ͼ*/
    auto sprite = Sprite::create("bj01_01-ipadhd.png");

    sprite->setPosition(Vec2(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));
	//sprite->setPosition(Point(0, 0));
	sprite->setPosition(visibleSize.width / 2, visibleSize.height / 2);
    this->addChild(sprite, 0);
	
    return true;
}


void HelloWorld::menuCloseCallback(Ref* pSender)
{
    Director::getInstance()->end();

    #if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
    
   
    
}
