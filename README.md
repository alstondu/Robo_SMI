# Robo_SMI

Description: This package forms the base ROS workspace for UCL COMP0129: Robotic Sensing, Manipulation and Interaction, using for weekly lab practice.

Author:
Workspace created by Eddie Edwards, Dimitrios Kanoulas, Luke Beddow, Denis Hadjivelichkov
Tutorial completed and maintained by Yuang Du(ucab190@ucl.ac.uk)

## Topics Covered

+ Representing Poses and Kinematics for Robot Manipulation
+ Visual & other Exteroceptive Sensing
+ Visual pose estimation under uncertainty
+ Force/Torque & other Proprioceptive Sensing
+ Sensing-based Grasping
+ Pick-and-Place Methods
+ Navigation Among Movable Objects (NAMO)
+ Human-Robot Interaction and Collaboration
+ Reinforcement Learning for Grasping

## Pre-Requisites
```bash
> sudo apt install ros-noetic-franka-ros ros-noetic-libfranka
```
Gazebo physics simluator is also needed (http://gazebosim.org/). This can be installed and then run with:
```bash
> curl -sSL http://get.gazebosim.org | sh
> gazebo
```

## Installation
```bash
> git clone https://github.com/alstondu/Robo_SMI.git
> cd Robo_SMI
> catkin clean
> catkin build
```

## License
LICENSE: MIT.  See [LICENSE.txt](LICENSE.txt)

DISCLAIMER:

THIS INFORMATION AND/OR SOFTWARE IS PROVIDED BY THE AUTHOR "AS IS" AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS INFORMATION AND/OR
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

Copyright (C) 2019-2024 Dimitrios Kanoulas except where specified
