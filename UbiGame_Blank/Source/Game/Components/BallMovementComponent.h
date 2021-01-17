#pragma once

#include "GameEngine/EntitySystem/Component.h"

namespace Game
{
    class BallMovementComponent : public GameEngine::Component
    {
        float degrees = 0.0f;
    public:
        virtual void Update() override;
        virtual void OnAddToWorld() override;
    };
}