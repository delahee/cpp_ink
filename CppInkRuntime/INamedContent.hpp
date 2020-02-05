#pragma once

using namespace std;
#include <string>

namespace ink {
	namespace runtime {
		class INamedContent  {
		public:
			virtual string	getName() = 0;
			virtual bool	hasValidName() = 0 ;
		};
	}
}