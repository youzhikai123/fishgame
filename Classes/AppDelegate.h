#ifndef  _APP_DELEGATE_H_
#define  _APP_DELEGATE_H_

#include "cocos2d.h"


class  AppDelegate : private cocos2d::Application
{
public:
    AppDelegate();
    virtual ~AppDelegate();

    virtual void initGLContextAttrs();//���� OpenGL����


    virtual bool applicationDidFinishLaunching();//�߼���ʼ��


    virtual void applicationDidEnterBackground();//�л�����̨


    virtual void applicationWillEnterForeground();//�л���ǰ̨
};

#endif // _APP_DELEGATE_H_

