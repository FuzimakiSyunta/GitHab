#pragma once
#include "Input.h"
#include "Model.h"
#include "WorldTransform.h"
#include "ViewProjection.h"

class RailCamera {
public:
	Vector3 GetWorldPosition();

	const ViewProjection& GetViewProjection() { return viewProjection_; }

	const WorldTransform& GetWorldTransform() { return worldTransform_; }

	void Initialize(Vector3& worldPos,Vector3& rotate);

	void Update();

	

private:
	// ワールド変換データ
	WorldTransform worldTransform_;
	//ビュープロジェクション
	ViewProjection viewProjection_;



};