 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree142(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 4, (DAAL_DATA_TYPE)1.6505000000000003);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 23, (DAAL_DATA_TYPE)1.0625000000000002);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 21, (DAAL_DATA_TYPE)2.7340000000000004);
    builder.addLeafNode(treeId, nodeIds[3], 0, (DAAL_DATA_TYPE)-0.0002663839258336409);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[3], 1, 5, (DAAL_DATA_TYPE)1.1135000000000004);
    builder.addLeafNode(treeId, nodeIds[5], 0, (DAAL_DATA_TYPE)-0.0098278563816186996);
    nodeIds[7] = builder.addSplitNode(treeId, nodeIds[5], 1, 18, (DAAL_DATA_TYPE)0.33550000000000008);
    builder.addLeafNode(treeId, nodeIds[7], 0, (DAAL_DATA_TYPE)-0.0040816024556342102);
    builder.addLeafNode(treeId, nodeIds[7], 1, (DAAL_DATA_TYPE)0.0073977852240204815);
    nodeIds[10] = builder.addSplitNode(treeId, nodeIds[2], 1, 5, (DAAL_DATA_TYPE)0.77050000000000007);
    nodeIds[11] = builder.addSplitNode(treeId, nodeIds[10], 0, 25, (DAAL_DATA_TYPE)0.87350000000000005);
    nodeIds[12] = builder.addSplitNode(treeId, nodeIds[11], 0, 11, (DAAL_DATA_TYPE)-0.75249999999999984);
    builder.addLeafNode(treeId, nodeIds[12], 0, (DAAL_DATA_TYPE)0.0063296222624679406);
    nodeIds[14] = builder.addSplitNode(treeId, nodeIds[12], 1, 25, (DAAL_DATA_TYPE)0.65950000000000009);
    builder.addLeafNode(treeId, nodeIds[14], 0, (DAAL_DATA_TYPE)-0.0042908510436182436);
    builder.addLeafNode(treeId, nodeIds[14], 1, (DAAL_DATA_TYPE)0.0024227600317034458);
    nodeIds[17] = builder.addSplitNode(treeId, nodeIds[11], 1, 25, (DAAL_DATA_TYPE)0.98450000000000004);
    nodeIds[18] = builder.addSplitNode(treeId, nodeIds[17], 0, 23, (DAAL_DATA_TYPE)1.2425000000000004);
    builder.addLeafNode(treeId, nodeIds[18], 0, (DAAL_DATA_TYPE)-0.0047283140470500331);
    builder.addLeafNode(treeId, nodeIds[18], 1, (DAAL_DATA_TYPE)-0.017131249770522116);
    nodeIds[21] = builder.addSplitNode(treeId, nodeIds[17], 1, 10, (DAAL_DATA_TYPE)-0.85299999999999987);
    builder.addLeafNode(treeId, nodeIds[21], 0, (DAAL_DATA_TYPE)0.0099015019787475483);
    nodeIds[23] = builder.addSplitNode(treeId, nodeIds[21], 1, 7, (DAAL_DATA_TYPE)-0.79749999999999999);
    builder.addLeafNode(treeId, nodeIds[23], 0, (DAAL_DATA_TYPE)-0.0098903276107233512);
    nodeIds[25] = builder.addSplitNode(treeId, nodeIds[23], 1, 11, (DAAL_DATA_TYPE)0.28550000000000003);
    builder.addLeafNode(treeId, nodeIds[25], 0, (DAAL_DATA_TYPE)-0.0049259939070405634);
    builder.addLeafNode(treeId, nodeIds[25], 1, (DAAL_DATA_TYPE)0.010421980128047013);
    nodeIds[28] = builder.addSplitNode(treeId, nodeIds[10], 1, 7, (DAAL_DATA_TYPE)0.45850000000000007);
    nodeIds[29] = builder.addSplitNode(treeId, nodeIds[28], 0, 4, (DAAL_DATA_TYPE)1.0155000000000001);
    nodeIds[30] = builder.addSplitNode(treeId, nodeIds[29], 0, 4, (DAAL_DATA_TYPE)0.52850000000000008);
    nodeIds[31] = builder.addSplitNode(treeId, nodeIds[30], 0, 21, (DAAL_DATA_TYPE)0.91150000000000009);
    nodeIds[32] = builder.addSplitNode(treeId, nodeIds[31], 0, 10, (DAAL_DATA_TYPE)0.32050000000000006);
    nodeIds[33] = builder.addSplitNode(treeId, nodeIds[32], 0, 2, (DAAL_DATA_TYPE)0.94550000000000012);
    builder.addLeafNode(treeId, nodeIds[33], 0, (DAAL_DATA_TYPE)-0.0081653504265528747);
    builder.addLeafNode(treeId, nodeIds[33], 1, (DAAL_DATA_TYPE)0.0014070236207252102);
    builder.addLeafNode(treeId, nodeIds[32], 1, (DAAL_DATA_TYPE)0.0028620751219845956);
    nodeIds[37] = builder.addSplitNode(treeId, nodeIds[31], 1, 4, (DAAL_DATA_TYPE)0.12100000000000001);
    builder.addLeafNode(treeId, nodeIds[37], 0, (DAAL_DATA_TYPE)0.0061891058236556501);
    builder.addLeafNode(treeId, nodeIds[37], 1, (DAAL_DATA_TYPE)-0.0041991454834539085);
    builder.addLeafNode(treeId, nodeIds[30], 1, (DAAL_DATA_TYPE)0.0073334426870324508);
    nodeIds[41] = builder.addSplitNode(treeId, nodeIds[29], 1, 19, (DAAL_DATA_TYPE)0.9255000000000001);
    nodeIds[42] = builder.addSplitNode(treeId, nodeIds[41], 0, 16, (DAAL_DATA_TYPE)1.9110000000000003);
    builder.addLeafNode(treeId, nodeIds[42], 0, (DAAL_DATA_TYPE)-0.012886636986300668);
    builder.addLeafNode(treeId, nodeIds[42], 1, (DAAL_DATA_TYPE)0.00058131433402498572);
    builder.addLeafNode(treeId, nodeIds[41], 1, (DAAL_DATA_TYPE)0.0044265103000013725);
    nodeIds[46] = builder.addSplitNode(treeId, nodeIds[28], 1, 0, (DAAL_DATA_TYPE)2.3275000000000001);
    nodeIds[47] = builder.addSplitNode(treeId, nodeIds[46], 0, 25, (DAAL_DATA_TYPE)0.65950000000000009);
    builder.addLeafNode(treeId, nodeIds[47], 0, (DAAL_DATA_TYPE)-0.0012883224200619303);
    builder.addLeafNode(treeId, nodeIds[47], 1, (DAAL_DATA_TYPE)0.0057784259856353461);
    builder.addLeafNode(treeId, nodeIds[46], 1, (DAAL_DATA_TYPE)-0.006257961820811034);
    nodeIds[51] = builder.addSplitNode(treeId, nodeIds[1], 1, 10, (DAAL_DATA_TYPE)0.95250000000000001);
    nodeIds[52] = builder.addSplitNode(treeId, nodeIds[51], 0, 1, (DAAL_DATA_TYPE)-0.59249999999999992);
    nodeIds[53] = builder.addSplitNode(treeId, nodeIds[52], 0, 18, (DAAL_DATA_TYPE)0.012500000000000002);
    builder.addLeafNode(treeId, nodeIds[53], 0, (DAAL_DATA_TYPE)-0.0042497528367675839);
    builder.addLeafNode(treeId, nodeIds[53], 1, (DAAL_DATA_TYPE)0.0063923530653119095);
    nodeIds[56] = builder.addSplitNode(treeId, nodeIds[52], 1, 16, (DAAL_DATA_TYPE)1.9110000000000003);
    nodeIds[57] = builder.addSplitNode(treeId, nodeIds[56], 0, 22, (DAAL_DATA_TYPE)0.86650000000000016);
    builder.addLeafNode(treeId, nodeIds[57], 0, (DAAL_DATA_TYPE)0.0049883694536137311);
    builder.addLeafNode(treeId, nodeIds[57], 1, (DAAL_DATA_TYPE)0.015885500667186882);
    builder.addLeafNode(treeId, nodeIds[56], 1, (DAAL_DATA_TYPE)0.0017211309185734503);
    builder.addLeafNode(treeId, nodeIds[51], 1, (DAAL_DATA_TYPE)-0.0066243102731691171);

}
