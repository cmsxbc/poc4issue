 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree146(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 9, (DAAL_DATA_TYPE)0.90750000000000008);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 27, (DAAL_DATA_TYPE)1.5530000000000002);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 9, (DAAL_DATA_TYPE)0.88050000000000017);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 10, (DAAL_DATA_TYPE)-1.3474999999999999);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[4], 0, 13, (DAAL_DATA_TYPE)0.95650000000000002);
    nodeIds[6] = builder.addSplitNode(treeId, nodeIds[5], 0, 4, (DAAL_DATA_TYPE)-0.17649999999999996);
    builder.addLeafNode(treeId, nodeIds[6], 0, (DAAL_DATA_TYPE)-0.0040363288241560052);
    nodeIds[8] = builder.addSplitNode(treeId, nodeIds[6], 1, 22, (DAAL_DATA_TYPE)0.99450000000000005);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[8], 0, 21, (DAAL_DATA_TYPE)0.83050000000000013);
    builder.addLeafNode(treeId, nodeIds[9], 0, (DAAL_DATA_TYPE)0.005975090240639064);
    builder.addLeafNode(treeId, nodeIds[9], 1, (DAAL_DATA_TYPE)-0.0055222092610266484);
    builder.addLeafNode(treeId, nodeIds[8], 1, (DAAL_DATA_TYPE)0.012941556672255198);
    builder.addLeafNode(treeId, nodeIds[5], 1, (DAAL_DATA_TYPE)-0.006073300087406675);
    nodeIds[14] = builder.addSplitNode(treeId, nodeIds[4], 1, 6, (DAAL_DATA_TYPE)-0.084499999999999992);
    nodeIds[15] = builder.addSplitNode(treeId, nodeIds[14], 0, 13, (DAAL_DATA_TYPE)1.3085000000000002);
    builder.addLeafNode(treeId, nodeIds[15], 0, (DAAL_DATA_TYPE)0.00062221187548827358);
    builder.addLeafNode(treeId, nodeIds[15], 1, (DAAL_DATA_TYPE)0.0058979773562815455);
    nodeIds[18] = builder.addSplitNode(treeId, nodeIds[14], 1, 22, (DAAL_DATA_TYPE)0.89650000000000019);
    nodeIds[19] = builder.addSplitNode(treeId, nodeIds[18], 0, 21, (DAAL_DATA_TYPE)0.88450000000000017);
    builder.addLeafNode(treeId, nodeIds[19], 0, (DAAL_DATA_TYPE)-0.00051827016056468572);
    builder.addLeafNode(treeId, nodeIds[19], 1, (DAAL_DATA_TYPE)0.0043021397060365417);
    nodeIds[22] = builder.addSplitNode(treeId, nodeIds[18], 1, 5, (DAAL_DATA_TYPE)0.90450000000000019);
    nodeIds[23] = builder.addSplitNode(treeId, nodeIds[22], 0, 10, (DAAL_DATA_TYPE)-0.24449999999999997);
    builder.addLeafNode(treeId, nodeIds[23], 0, (DAAL_DATA_TYPE)0.00011281116892570172);
    builder.addLeafNode(treeId, nodeIds[23], 1, (DAAL_DATA_TYPE)-0.0049456852016033703);
    nodeIds[26] = builder.addSplitNode(treeId, nodeIds[22], 1, 7, (DAAL_DATA_TYPE)0.68450000000000022);
    builder.addLeafNode(treeId, nodeIds[26], 0, (DAAL_DATA_TYPE)-0.0017653264463920746);
    builder.addLeafNode(treeId, nodeIds[26], 1, (DAAL_DATA_TYPE)0.0055610580360228867);
    nodeIds[29] = builder.addSplitNode(treeId, nodeIds[3], 1, 18, (DAAL_DATA_TYPE)0.99950000000000017);
    nodeIds[30] = builder.addSplitNode(treeId, nodeIds[29], 0, 22, (DAAL_DATA_TYPE)0.98650000000000004);
    nodeIds[31] = builder.addSplitNode(treeId, nodeIds[30], 0, 10, (DAAL_DATA_TYPE)0.13550000000000004);
    builder.addLeafNode(treeId, nodeIds[31], 0, (DAAL_DATA_TYPE)-0.012552975537255408);
    builder.addLeafNode(treeId, nodeIds[31], 1, (DAAL_DATA_TYPE)-0.00080256849593882042);
    builder.addLeafNode(treeId, nodeIds[30], 1, (DAAL_DATA_TYPE)0.00014342510234564544);
    builder.addLeafNode(treeId, nodeIds[29], 1, (DAAL_DATA_TYPE)0.0057817878613535033);
    nodeIds[36] = builder.addSplitNode(treeId, nodeIds[2], 1, 0, (DAAL_DATA_TYPE)0.49950000000000006);
    builder.addLeafNode(treeId, nodeIds[36], 0, (DAAL_DATA_TYPE)0.0019471717905253172);
    builder.addLeafNode(treeId, nodeIds[36], 1, (DAAL_DATA_TYPE)-0.0096457045334391311);
    nodeIds[39] = builder.addSplitNode(treeId, nodeIds[1], 1, 0, (DAAL_DATA_TYPE)0.38550000000000006);
    nodeIds[40] = builder.addSplitNode(treeId, nodeIds[39], 0, 11, (DAAL_DATA_TYPE)-1.1794999999999998);
    builder.addLeafNode(treeId, nodeIds[40], 0, (DAAL_DATA_TYPE)0.013652454249560833);
    nodeIds[42] = builder.addSplitNode(treeId, nodeIds[40], 1, 7, (DAAL_DATA_TYPE)-0.76749999999999996);
    builder.addLeafNode(treeId, nodeIds[42], 0, (DAAL_DATA_TYPE)0.0094438257272881666);
    nodeIds[44] = builder.addSplitNode(treeId, nodeIds[42], 1, 21, (DAAL_DATA_TYPE)0.75850000000000006);
    builder.addLeafNode(treeId, nodeIds[44], 0, (DAAL_DATA_TYPE)-0.0087128058471716945);
    nodeIds[46] = builder.addSplitNode(treeId, nodeIds[44], 1, 5, (DAAL_DATA_TYPE)0.96250000000000002);
    builder.addLeafNode(treeId, nodeIds[46], 0, (DAAL_DATA_TYPE)0.0084333141826625387);
    builder.addLeafNode(treeId, nodeIds[46], 1, (DAAL_DATA_TYPE)-0.0012142615067272412);
    nodeIds[49] = builder.addSplitNode(treeId, nodeIds[39], 1, 9, (DAAL_DATA_TYPE)0.93750000000000011);
    nodeIds[50] = builder.addSplitNode(treeId, nodeIds[49], 0, 17, (DAAL_DATA_TYPE)0.52050000000000007);
    builder.addLeafNode(treeId, nodeIds[50], 0, (DAAL_DATA_TYPE)0.01354102533776313);
    builder.addLeafNode(treeId, nodeIds[50], 1, (DAAL_DATA_TYPE)0.0026630546457504164);
    nodeIds[53] = builder.addSplitNode(treeId, nodeIds[49], 1, 10, (DAAL_DATA_TYPE)0.97550000000000014);
    builder.addLeafNode(treeId, nodeIds[53], 0, (DAAL_DATA_TYPE)-0.00038599514471656906);
    nodeIds[55] = builder.addSplitNode(treeId, nodeIds[53], 1, 2, (DAAL_DATA_TYPE)1.5225000000000002);
    nodeIds[56] = builder.addSplitNode(treeId, nodeIds[55], 0, 20, (DAAL_DATA_TYPE)1.0000000180025095e-35);
    nodeIds[57] = builder.addSplitNode(treeId, nodeIds[56], 0, 23, (DAAL_DATA_TYPE)0.99350000000000016);
    builder.addLeafNode(treeId, nodeIds[57], 0, (DAAL_DATA_TYPE)0.0033418185697837162);
    builder.addLeafNode(treeId, nodeIds[57], 1, (DAAL_DATA_TYPE)0.010425097732162424);
    builder.addLeafNode(treeId, nodeIds[56], 1, (DAAL_DATA_TYPE)0.00036075540385290721);
    builder.addLeafNode(treeId, nodeIds[55], 1, (DAAL_DATA_TYPE)-0.0081054377909326424);

}