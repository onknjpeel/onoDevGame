#include "GameScene.h"

using namespace KamataEngine;
using namespace MathUtility;

GameScene::~GameScene() {}

void GameScene::Initialize() {}

void GameScene::Update() {}

void GameScene::Draw() {
	DirectXCommon* dxCommon = DirectXCommon::GetInstance();

	Model::PreDraw();

	Model::PostDraw();
}