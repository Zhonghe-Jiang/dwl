#ifndef DWL_BodyMotorPrimitives_H
#define DWL_BodyMotorPrimitives_H

#include <behavior/MotorPrimitives.h>
#include <utils/utils.h>


namespace dwl
{

namespace behavior
{

/**
 * @class BodyMotorPrimitives
 * @brief Class for generating body motor primitives
 */
class BodyMotorPrimitives : public MotorPrimitives
{
	public:
		/** @brief Constructor function */
		BodyMotorPrimitives();

		/** @brief Destructor function */
		~BodyMotorPrimitives();

		/**
		 * @brief Abstract method for generation 3D actions
		 * @param std::vector<dwl::Pose3d>& actions Set of actions
		 * @param dwl::Pose3d state Current 3D pose
		 */
		void generateActions(std::vector<Pose3d>& actions, Pose3d state);


	private:

};

} //@namespace behavior
} //@namespace dwl

#endif
