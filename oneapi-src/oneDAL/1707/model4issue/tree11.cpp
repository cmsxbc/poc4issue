 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree11(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 25, (DAAL_DATA_TYPE)1.2815000000000001);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 25, (DAAL_DATA_TYPE)0.66550000000000009);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 5, (DAAL_DATA_TYPE)1.3365000000000002);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 3, (DAAL_DATA_TYPE)0.42050000000000004);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[4], 0, 1, (DAAL_DATA_TYPE)0.83950000000000002);
    builder.addLeafNode(treeId, nodeIds[5], 0, (DAAL_DATA_TYPE)0.0051775401431909751);
    builder.addLeafNode(treeId, nodeIds[5], 1, (DAAL_DATA_TYPE)-0.012521706574729511);
    nodeIds[8] = builder.addSplitNode(treeId, nodeIds[4], 1, 13, (DAAL_DATA_TYPE)0.9405);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[8], 0, 9, (DAAL_DATA_TYPE)1.1375000000000002);
    builder.addLeafNode(treeId, nodeIds[9], 0, (DAAL_DATA_TYPE)-0.0074603405476562565);
    builder.addLeafNode(treeId, nodeIds[9], 1, (DAAL_DATA_TYPE)0.0028385578361276079);
    builder.addLeafNode(treeId, nodeIds[8], 1, (DAAL_DATA_TYPE)-0.00066483728713058064);
    builder.addLeafNode(treeId, nodeIds[3], 1, (DAAL_DATA_TYPE)0.004690968710929156);
    nodeIds[14] = builder.addSplitNode(treeId, nodeIds[2], 1, 25, (DAAL_DATA_TYPE)0.98450000000000004);
    nodeIds[15] = builder.addSplitNode(treeId, nodeIds[14], 0, 26, (DAAL_DATA_TYPE)0.77650000000000008);
    nodeIds[16] = builder.addSplitNode(treeId, nodeIds[15], 0, 5, (DAAL_DATA_TYPE)0.80150000000000021);
    nodeIds[17] = builder.addSplitNode(treeId, nodeIds[16], 0, 14, (DAAL_DATA_TYPE)0.77350000000000019);
    builder.addLeafNode(treeId, nodeIds[17], 0, (DAAL_DATA_TYPE)-0.010239705427096842);
    builder.addLeafNode(treeId, nodeIds[17], 1, (DAAL_DATA_TYPE)0.00566649665666181);
    builder.addLeafNode(treeId, nodeIds[16], 1, (DAAL_DATA_TYPE)0.0057854902413156306);
    nodeIds[21] = builder.addSplitNode(treeId, nodeIds[15], 1, 27, (DAAL_DATA_TYPE)0.90450000000000019);
    nodeIds[22] = builder.addSplitNode(treeId, nodeIds[21], 0, 26, (DAAL_DATA_TYPE)0.87350000000000005);
    nodeIds[23] = builder.addSplitNode(treeId, nodeIds[22], 0, 27, (DAAL_DATA_TYPE)0.80150000000000021);
    builder.addLeafNode(treeId, nodeIds[23], 0, (DAAL_DATA_TYPE)0.0095524471187027268);
    builder.addLeafNode(treeId, nodeIds[23], 1, (DAAL_DATA_TYPE)-0.002763296953104075);
    builder.addLeafNode(treeId, nodeIds[22], 1, (DAAL_DATA_TYPE)0.011997346555262063);
    nodeIds[27] = builder.addSplitNode(treeId, nodeIds[21], 1, 3, (DAAL_DATA_TYPE)2.0310000000000001);
    nodeIds[28] = builder.addSplitNode(treeId, nodeIds[27], 0, 0, (DAAL_DATA_TYPE)1.7805000000000002);
    nodeIds[29] = builder.addSplitNode(treeId, nodeIds[28], 0, 5, (DAAL_DATA_TYPE)0.81250000000000011);
    nodeIds[30] = builder.addSplitNode(treeId, nodeIds[29], 0, 9, (DAAL_DATA_TYPE)1.3035000000000003);
    nodeIds[31] = builder.addSplitNode(treeId, nodeIds[30], 0, 27, (DAAL_DATA_TYPE)0.92450000000000021);
    builder.addLeafNode(treeId, nodeIds[31], 0, (DAAL_DATA_TYPE)-0.018594569999438065);
    builder.addLeafNode(treeId, nodeIds[31], 1, (DAAL_DATA_TYPE)0.00015052069233070992);
    builder.addLeafNode(treeId, nodeIds[30], 1, (DAAL_DATA_TYPE)0.015837486535310748);
    builder.addLeafNode(treeId, nodeIds[29], 1, (DAAL_DATA_TYPE)0.0083022663302910645);
    nodeIds[36] = builder.addSplitNode(treeId, nodeIds[28], 1, 1, (DAAL_DATA_TYPE)0.54950000000000021);
    builder.addLeafNode(treeId, nodeIds[36], 0, (DAAL_DATA_TYPE)0.0012080046481319838);
    builder.addLeafNode(treeId, nodeIds[36], 1, (DAAL_DATA_TYPE)-0.015729695829478179);
    builder.addLeafNode(treeId, nodeIds[27], 1, (DAAL_DATA_TYPE)-0.007415166320769411);
    nodeIds[40] = builder.addSplitNode(treeId, nodeIds[14], 1, 5, (DAAL_DATA_TYPE)1.1815000000000002);
    nodeIds[41] = builder.addSplitNode(treeId, nodeIds[40], 0, 26, (DAAL_DATA_TYPE)0.94650000000000001);
    nodeIds[42] = builder.addSplitNode(treeId, nodeIds[41], 0, 27, (DAAL_DATA_TYPE)0.84450000000000014);
    builder.addLeafNode(treeId, nodeIds[42], 0, (DAAL_DATA_TYPE)-0.0053852739256794986);
    builder.addLeafNode(treeId, nodeIds[42], 1, (DAAL_DATA_TYPE)-0.017082130464545469);
    builder.addLeafNode(treeId, nodeIds[41], 1, (DAAL_DATA_TYPE)-0.00051985402611920439);
    nodeIds[46] = builder.addSplitNode(treeId, nodeIds[40], 1, 0, (DAAL_DATA_TYPE)1.9325000000000003);
    nodeIds[47] = builder.addSplitNode(treeId, nodeIds[46], 0, 27, (DAAL_DATA_TYPE)0.95050000000000001);
    builder.addLeafNode(treeId, nodeIds[47], 0, (DAAL_DATA_TYPE)0.014109923322310395);
    nodeIds[49] = builder.addSplitNode(treeId, nodeIds[47], 1, 24, (DAAL_DATA_TYPE)0.96550000000000014);
    builder.addLeafNode(treeId, nodeIds[49], 0, (DAAL_DATA_TYPE)-0.014371436257516185);
    builder.addLeafNode(treeId, nodeIds[49], 1, (DAAL_DATA_TYPE)0.0078016948083351398);
    builder.addLeafNode(treeId, nodeIds[46], 1, (DAAL_DATA_TYPE)-0.015543503810962042);
    nodeIds[53] = builder.addSplitNode(treeId, nodeIds[1], 1, 3, (DAAL_DATA_TYPE)1.8335000000000001);
    nodeIds[54] = builder.addSplitNode(treeId, nodeIds[53], 0, 25, (DAAL_DATA_TYPE)2.1950000000000007);
    nodeIds[55] = builder.addSplitNode(treeId, nodeIds[54], 0, 5, (DAAL_DATA_TYPE)1.7625000000000002);
    nodeIds[56] = builder.addSplitNode(treeId, nodeIds[55], 0, 21, (DAAL_DATA_TYPE)0.58250000000000013);
    builder.addLeafNode(treeId, nodeIds[56], 0, (DAAL_DATA_TYPE)0.0022723650336265565);
    builder.addLeafNode(treeId, nodeIds[56], 1, (DAAL_DATA_TYPE)-0.0073014073308930311);
    builder.addLeafNode(treeId, nodeIds[55], 1, (DAAL_DATA_TYPE)0.0087657014990961835);
    builder.addLeafNode(treeId, nodeIds[54], 1, (DAAL_DATA_TYPE)-0.013043485843498287);
    builder.addLeafNode(treeId, nodeIds[53], 1, (DAAL_DATA_TYPE)-0.017190872287998597);

}
