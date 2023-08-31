﻿#pragma once

#include "Input.h"
#include "Model.h"
#include "WorldTransform.h"

class EnemyBullet {
public:
	void Initialize(Model* model, const Vector3& position, const Vector3& velocity);

	void Update();

	void Draw(const ViewProjection& viewProjection);

	bool IsDead() const { return isDead_; }

	// コールバック関数
	void OnCollision();

		// ワールド座標を取得
	Vector3 GetWorldPosition();

private:
	WorldTransform worldTransform_;
	Model* model_ = nullptr;
	uint32_t textureHandle_ = 0u;
	EnemyBullet* enemybullet_ = nullptr;
	// 速度
	Vector3 velocity_ = {0.0f};
	// 寿命
	static const int32_t kLifeTime = 60 * 5;
	// デスタイマー
	int32_t deathTimer_ = kLifeTime;
	// ですフラグ
	bool isDead_ = false;

};
