 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree102(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 10, (DAAL_DATA_TYPE)-2.5549999999999993);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 16, (DAAL_DATA_TYPE)1.0000000180025095e-35);
    builder.addLeafNode(treeId, nodeIds[2], 0, (DAAL_DATA_TYPE)-0.014335821789096703);
    builder.addLeafNode(treeId, nodeIds[2], 1, (DAAL_DATA_TYPE)0.0012036345089741407);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[1], 1, 27, (DAAL_DATA_TYPE)0.72250000000000003);
    nodeIds[6] = builder.addSplitNode(treeId, nodeIds[5], 0, 26, (DAAL_DATA_TYPE)0.83850000000000013);
    nodeIds[7] = builder.addSplitNode(treeId, nodeIds[6], 0, 27, (DAAL_DATA_TYPE)0.71350000000000013);
    nodeIds[8] = builder.addSplitNode(treeId, nodeIds[7], 0, 26, (DAAL_DATA_TYPE)0.80550000000000022);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[8], 0, 21, (DAAL_DATA_TYPE)0.78850000000000009);
    nodeIds[10] = builder.addSplitNode(treeId, nodeIds[9], 0, 1, (DAAL_DATA_TYPE)0.88050000000000017);
    builder.addLeafNode(treeId, nodeIds[10], 0, (DAAL_DATA_TYPE)-0.00022620886190458626);
    builder.addLeafNode(treeId, nodeIds[10], 1, (DAAL_DATA_TYPE)-0.0095546248440559096);
    builder.addLeafNode(treeId, nodeIds[9], 1, (DAAL_DATA_TYPE)0.0019242445349567285);
    builder.addLeafNode(treeId, nodeIds[8], 1, (DAAL_DATA_TYPE)0.0092309043975546956);
    builder.addLeafNode(treeId, nodeIds[7], 1, (DAAL_DATA_TYPE)0.0083366594054614714);
    builder.addLeafNode(treeId, nodeIds[6], 1, (DAAL_DATA_TYPE)-0.0077654156727450241);
    nodeIds[17] = builder.addSplitNode(treeId, nodeIds[5], 1, 26, (DAAL_DATA_TYPE)0.82450000000000012);
    nodeIds[18] = builder.addSplitNode(treeId, nodeIds[17], 0, 5, (DAAL_DATA_TYPE)0.60350000000000004);
    nodeIds[19] = builder.addSplitNode(treeId, nodeIds[18], 0, 27, (DAAL_DATA_TYPE)0.81050000000000011);
    nodeIds[20] = builder.addSplitNode(treeId, nodeIds[19], 0, 19, (DAAL_DATA_TYPE)0.61450000000000016);
    builder.addLeafNode(treeId, nodeIds[20], 0, (DAAL_DATA_TYPE)0.002122513670474291);
    builder.addLeafNode(treeId, nodeIds[20], 1, (DAAL_DATA_TYPE)-0.0080402392894029628);
    nodeIds[23] = builder.addSplitNode(treeId, nodeIds[19], 1, 26, (DAAL_DATA_TYPE)0.76450000000000007);
    builder.addLeafNode(treeId, nodeIds[23], 0, (DAAL_DATA_TYPE)0.015211240825458215);
    builder.addLeafNode(treeId, nodeIds[23], 1, (DAAL_DATA_TYPE)0.0011378759074778784);
    nodeIds[26] = builder.addSplitNode(treeId, nodeIds[18], 1, 5, (DAAL_DATA_TYPE)1.1135000000000004);
    builder.addLeafNode(treeId, nodeIds[26], 0, (DAAL_DATA_TYPE)-0.0042248491550908309);
    nodeIds[28] = builder.addSplitNode(treeId, nodeIds[26], 1, 11, (DAAL_DATA_TYPE)0.43150000000000005);
    builder.addLeafNode(treeId, nodeIds[28], 0, (DAAL_DATA_TYPE)-0.0020788769481199175);
    builder.addLeafNode(treeId, nodeIds[28], 1, (DAAL_DATA_TYPE)0.0084773906266256676);
    nodeIds[31] = builder.addSplitNode(treeId, nodeIds[17], 1, 27, (DAAL_DATA_TYPE)0.7965000000000001);
    nodeIds[32] = builder.addSplitNode(treeId, nodeIds[31], 0, 24, (DAAL_DATA_TYPE)0.9215000000000001);
    nodeIds[33] = builder.addSplitNode(treeId, nodeIds[32], 0, 22, (DAAL_DATA_TYPE)1.1895000000000002);
    builder.addLeafNode(treeId, nodeIds[33], 0, (DAAL_DATA_TYPE)0.004471472143407801);
    builder.addLeafNode(treeId, nodeIds[33], 1, (DAAL_DATA_TYPE)-0.0088370320642792172);
    builder.addLeafNode(treeId, nodeIds[32], 1, (DAAL_DATA_TYPE)-0.0010753412694678806);
    nodeIds[37] = builder.addSplitNode(treeId, nodeIds[31], 1, 26, (DAAL_DATA_TYPE)0.92250000000000021);
    nodeIds[38] = builder.addSplitNode(treeId, nodeIds[37], 0, 22, (DAAL_DATA_TYPE)1.1665000000000003);
    nodeIds[39] = builder.addSplitNode(treeId, nodeIds[38], 0, 2, (DAAL_DATA_TYPE)-1.1874999999999998);
    builder.addLeafNode(treeId, nodeIds[39], 0, (DAAL_DATA_TYPE)0.0027586424823951078);
    nodeIds[41] = builder.addSplitNode(treeId, nodeIds[39], 1, 8, (DAAL_DATA_TYPE)1.6300000000000001);
    nodeIds[42] = builder.addSplitNode(treeId, nodeIds[41], 0, 22, (DAAL_DATA_TYPE)0.93050000000000022);
    builder.addLeafNode(treeId, nodeIds[42], 0, (DAAL_DATA_TYPE)-0.0050153465062306316);
    nodeIds[44] = builder.addSplitNode(treeId, nodeIds[42], 1, 0, (DAAL_DATA_TYPE)1.0575000000000003);
    nodeIds[45] = builder.addSplitNode(treeId, nodeIds[44], 0, 24, (DAAL_DATA_TYPE)1.0105000000000002);
    builder.addLeafNode(treeId, nodeIds[45], 0, (DAAL_DATA_TYPE)0.0013311003569338093);
    builder.addLeafNode(treeId, nodeIds[45], 1, (DAAL_DATA_TYPE)0.013436098476605757);
    nodeIds[48] = builder.addSplitNode(treeId, nodeIds[44], 1, 3, (DAAL_DATA_TYPE)0.98050000000000004);
    builder.addLeafNode(treeId, nodeIds[48], 0, (DAAL_DATA_TYPE)-0.011461474746465684);
    builder.addLeafNode(treeId, nodeIds[48], 1, (DAAL_DATA_TYPE)0.0033097889803519309);
    nodeIds[51] = builder.addSplitNode(treeId, nodeIds[41], 1, 6, (DAAL_DATA_TYPE)-0.028499999999999998);
    nodeIds[52] = builder.addSplitNode(treeId, nodeIds[51], 0, 24, (DAAL_DATA_TYPE)1.0155000000000001);
    builder.addLeafNode(treeId, nodeIds[52], 0, (DAAL_DATA_TYPE)-0.0064194705383852123);
    builder.addLeafNode(treeId, nodeIds[52], 1, (DAAL_DATA_TYPE)0.0055178503990173343);
    nodeIds[55] = builder.addSplitNode(treeId, nodeIds[51], 1, 17, (DAAL_DATA_TYPE)1.0295000000000003);
    nodeIds[56] = builder.addSplitNode(treeId, nodeIds[55], 0, 11, (DAAL_DATA_TYPE)1.0000000180025095e-35);
    builder.addLeafNode(treeId, nodeIds[56], 0, (DAAL_DATA_TYPE)-0.015100249696684921);
    builder.addLeafNode(treeId, nodeIds[56], 1, (DAAL_DATA_TYPE)0.00060015882111408498);
    builder.addLeafNode(treeId, nodeIds[55], 1, (DAAL_DATA_TYPE)-0.023317195215950843);
    builder.addLeafNode(treeId, nodeIds[38], 1, (DAAL_DATA_TYPE)0.0066146739572286607);
    builder.addLeafNode(treeId, nodeIds[37], 1, (DAAL_DATA_TYPE)0.00016628842845533626);

}
