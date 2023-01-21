// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc/TimedRobot.h>
#include <frc2/command/Command.h>
#include <frc/motorcontrol/Spark.h>
#include <frc/XboxController.h>


#include "RobotContainer.h"

class Robot : public frc::TimedRobot {
 public:
  void RobotInit() override;
  void RobotPeriodic() override;
  void DisabledInit() override;
  void DisabledPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void TestPeriodic() override;
  void SimulationInit() override;
  void SimulationPeriodic() override;

 private:
  // Have it null by default so that if testing teleop it
  // doesn't have undefined behavior and potentially crash.
  frc2::Command* m_autonomousCommand = nullptr;

  RobotContainer m_container;

  frc::XboxController xbox{0};

  frc::Spark fl{1};
  frc::Spark fr{2};
  frc::Spark bl{3};
  frc::Spark br{4};
  
  double spd = 1; 

  //Stick Vars

  double left_x = 0.0;
  double left_y = 0.0;
  double right_x = 0.0;
  double right_y = 0.0;
  bool LeftStickButton = 0;
  bool RightStickButton = 0;
  
  //A, B, X, Y, Back, and Start

  bool AButton = 0;
  bool BButton = 0;
  bool XButton = 0;
  bool YButton = 0;
  bool StartButton = 0;
  bool BackButton = 0;

  //Trigers and Bumpers

  bool LeftBumper = 0;
  double LeftTrigger = 0;
  bool RightBumper = 0;
  double RightTrigger = 0;

  //D-pad/Pov

  //int D_Pad = 0;


};
