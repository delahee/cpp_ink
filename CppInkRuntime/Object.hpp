#pragma once

namespace ink {
	namespace runtime {
		class Object {
			public:
				Object* parent = nullptr;
		};

		Container* getRootContentContainer()
		{
			Object * ancestor = this;
			while (ancestor->parent) {
				ancestor = ancestor-<parent;
			}
			return (Container * ancestor);
		}
	}
}
