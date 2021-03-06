#ifndef RENDERTARGET_H_
#define RENDERTARGET_H_

#include "cocos2d.h"

namespace cocos3d
{
class C3DTexture;
/**
 * Represents a linear area of display memory and usually reside
 * in the display memory of the display card.
 */
class C3DRenderTarget : public cocos2d::CCObject
{
public:

	/**
	 * create render target
	 */
    static C3DRenderTarget* create(const std::string& id, unsigned int width, unsigned int height, unsigned int fmt);
    static C3DRenderTarget* getRenderTarget(const std::string& id);

	/**
	 * string id
	 */
    const std::string& getID() const;

	/**
	 * get texture
	 */
    C3DTexture* getTexture() const;

private:

	/**
	 * constructor & destructor
	 */
    C3DRenderTarget(const std::string& id);
    ~C3DRenderTarget();

	//properties
    std::string _id;
    C3DTexture* _texture;
};
}

#endif
