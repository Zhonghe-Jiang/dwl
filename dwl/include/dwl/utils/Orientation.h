#ifndef DWL__MATH__ORIENTATION__H
#define DWL__MATH__ORIENTATION__H

#include <Eigen/Dense>


namespace dwl
{

enum TypeOfOrientation {RollPitchYaw, Quaternion, RotationMatrix};

namespace math
{

/**
 * @brief Gets the roll, pitch and yaw angles from rotation matrix
 * @param const Eigen::Matrix3d& Rotation matrix
 * @return Eigen::Vector3d Roll, pitch and yaw angles
 */
Eigen::Vector3d getRPY(const Eigen::Matrix3d& rotation_mtx);

/**
 * @brief Gets the roll, pitch and yaw angles from quaternion
 * @param const Eigen::Quaterniond& Quaternion
 * @return Eigen::Vector3d Roll, pitch and yaw angles
 */
Eigen::Vector3d getRPY(const Eigen::Quaterniond& quaternion);

/**
 * @brief Gets the quaternion, i.e. the scalar (w) and vector (x,y,z)
 * components from rotation matrix
 * @param const Eigen::Matrix3d& Rotation matrix
 * @return Eigen::Quaterniond Quaternion
 */
Eigen::Quaterniond getQuaternion(const Eigen::Matrix3d& rotation_mtx);

/**
 * @brief Gets the quaternion, i.e. the scalar (w) and vector (x,y,z)
 * components from roll, pitch and yaw angles
 * @param const Eigen::Matrix3d& Roll, pitch and yaw angles
 * @return Eigen::Quaterniond Quaternion
 */
Eigen::Quaterniond getQuaternion(const Eigen::Vector3d& rpy);

/**
 * @brief Gets the rotation matrix from local to world frame given a quaternion
 * @param const Eigen::Quaterniond& Quaternion
 * @return Eigen::Matrix3d Rotation matrix
 */
Eigen::Matrix3d getRotationMatrix(const Eigen::Quaterniond& quaternion);

/**
 * @brief Gets the rotation matrix from local to world frame given
 * the roll, pitch and yaw angles
 * @param const Eigen::Quaterniond& Quaternion
 * @return Eigen::Matrix3d Rotation matrix
 */
Eigen::Matrix3d getRotationMatrix(const Eigen::Vector3d& rpy);

/**
 * @brief Gets the roll angle
 * @param const Eigen::Vector3d& Roll, pitch and yaw vector
 * @return double Roll angle
 */
double getRoll(const Eigen::Vector3d& rpy);

/**
 * @brief Gets the pitch angle
 * @param const Eigen::Vector3d& Roll, pitch and yaw vector
 * @return double Pitch angle
 */
double getPitch(const Eigen::Vector3d& rpy);

/**
 * @brief Gets the yaw angle
 * @param const Eigen::Vector3d& Roll, pitch and yaw vector
 * @return double Yaw angle
 */
double getYaw(const Eigen::Vector3d& rpy);

/**
 * @brief Gets the Euler angles rates matrix from RPY vector
 * @param const Eigen::Vector3d& Roll, pitch and yaw vector
 * @return Eigen::Matrix3d Euler angle rates matrix
 */
Eigen::Matrix3d getInverseEulerAnglesRatesMatrix(const Eigen::Vector3d& rpy);

/**
 * @brief Gets the Euler angles rates matrix from rotation matrix
 * @param const Eigen::Matrix3d& Rotation matrix
 * @return Eigen::Matrix3d Euler angle rates matrix
 */
Eigen::Matrix3d getInverseEulerAnglesRatesMatrix(const Eigen::Matrix3d& rotation_mtx);

/**
 * @brief Gets the Euler angles rates matrix from quaternion
 * @param const Eigen::Quaterniond& Quaternion
 * @return Eigen::Matrix3d Euler angle rates matrix
 */
Eigen::Matrix3d getInverseEulerAnglesRatesMatrix(const Eigen::Quaterniond& quaternion);

}
}

#endif
