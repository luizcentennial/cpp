// ENUMERATIONS:

// Enums are types that only allow a restricted range of possible values.
// There are two types of enums in C++:
// - Scoped enums, and
// - Unscoped enums.
// 
// The difference is that scoped enums are specific regarding its 
// context, preventing ambiguity in cases where an enum relates to
// multiple entities.

#include "Status.h"
#include "ConnectionStatus.h"

int main() {
	// Unscoped enum:
	Status status = Ok;

	// Scoped enum:
	ConnectionStatus cs = ConnectionStatus::Open;

	return 0;
}