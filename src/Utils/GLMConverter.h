//
// Created by Engin Manap on 8.03.2016.
//

#ifndef UBERGAME_BULLETGLMCONVERTER_H
#define UBERGAME_BULLETGLMCONVERTER_H

#include <btBulletDynamicsCommon.h>
#include <assimp/vector3.h>
#include <assimp/types.h>
#include "../glm/glm.hpp"

class GLMConverter {
public:
    static glm::vec3 BltToGLM(const btVector3 &vector) {
        return glm::vec3(vector.getX(), vector.getY(), vector.getZ());
    }

    static btVector3 GLMToBlt(const glm::vec3 &vector) {
        return btVector3(vector.x, vector.y, vector.z);
    }

    static glm::vec3 AssimpToGLM(const aiVector3D &vector) {
        return glm::vec3(vector.x, vector.y, vector.z);
    }

    static glm::vec3 AssimpToGLM(const aiColor3D &color) {
        return glm::vec3(color.r, color.g, color.b);
    }

    static aiVector3D GLMToAssimp(const glm::vec3 &vector) {
        return aiVector3D(vector.x, vector.y, vector.z);
    }

    static btVector3 AssimpToBullet(const aiVector3D &vector) {
        return btVector3(vector.x, vector.y, vector.z);
    }
};


#endif //UBERGAME_BULLETGLMCONVERTER_H
