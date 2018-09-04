/** Handling for assignment nodes
 * @file
 *
 * This source file is part of the Cone Programming Language C compiler
 * See Copyright Notice in conec.h
*/

#ifndef assign_h
#define assign_h

// Variations on assignment
enum AssignType {
	NormalAssign
};

// Assignment node
typedef struct AssignNode {
	ITypedNodeHdr;
	INode *lval;
	INode *rval;
	int16_t assignType;
} AssignNode;

AssignNode *newAssignNode(int16_t assigntype, INode *lval, INode *rval);
void assignPrint(AssignNode *node);
void assignPass(PassState *pstate, AssignNode *node);

#endif