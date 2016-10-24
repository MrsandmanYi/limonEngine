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

    static glm::mat4 AssimpToGLM(const aiMatrix4x4 &matrix) {
        return glm::mat4(
                matrix[0][0], matrix[0][1], matrix[0][2], matrix[0][3],
                matrix[1][0], matrix[1][1], matrix[1][2], matrix[1][3],
                matrix[2][0], matrix[2][1], matrix[2][2], matrix[2][3],
                matrix[3][0], matrix[3][1], matrix[3][2], matrix[3][3]
        );
    }


    static aiVector3D GLMToAssimp(const glm::vec3 &vector) {
        return aiVector3D(vector.x, vector.y, vector.z);
    }

    static btVector3 AssimpToBullet(const aiVector3D &vector) {
        return btVector3(vector.x, vector.y, vector.z);
    }
};


#endif //UBERGAME_BULLETGLMCONVERTER_H
