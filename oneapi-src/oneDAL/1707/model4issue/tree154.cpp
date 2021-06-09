 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree154(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 1, (DAAL_DATA_TYPE)1.6995000000000002);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 20, (DAAL_DATA_TYPE)1.0000000180025095e-35);
    builder.addLeafNode(treeId, nodeIds[2], 0, (DAAL_DATA_TYPE)0.0006343379279776755);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[2], 1, 23, (DAAL_DATA_TYPE)1.6360000000000003);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[4], 0, 0, (DAAL_DATA_TYPE)0.82150000000000001);
    nodeIds[6] = builder.addSplitNode(treeId, nodeIds[5], 0, 19, (DAAL_DATA_TYPE)0.64800000000000013);
    nodeIds[7] = builder.addSplitNode(treeId, nodeIds[6], 0, 3, (DAAL_DATA_TYPE)1.5935000000000004);
    nodeIds[8] = builder.addSplitNode(treeId, nodeIds[7], 0, 2, (DAAL_DATA_TYPE)0.70950000000000013);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[8], 0, 2, (DAAL_DATA_TYPE)0.50950000000000017);
    builder.addLeafNode(treeId, nodeIds[9], 0, (DAAL_DATA_TYPE)-0.00029731120790137415);
    builder.addLeafNode(treeId, nodeIds[9], 1, (DAAL_DATA_TYPE)-0.0092013228254822586);
    nodeIds[12] = builder.addSplitNode(treeId, nodeIds[8], 1, 2, (DAAL_DATA_TYPE)0.80950000000000022);
    builder.addLeafNode(treeId, nodeIds[12], 0, (DAAL_DATA_TYPE)0.015042118378914893);
    nodeIds[14] = builder.addSplitNode(treeId, nodeIds[12], 1, 14, (DAAL_DATA_TYPE)-0.025499999999999998);
    nodeIds[15] = builder.addSplitNode(treeId, nodeIds[14], 0, 2, (DAAL_DATA_TYPE)1.3855000000000002);
    builder.addLeafNode(treeId, nodeIds[15], 0, (DAAL_DATA_TYPE)-0.0090654454671028183);
    builder.addLeafNode(treeId, nodeIds[15], 1, (DAAL_DATA_TYPE)0.0033592432085424659);
    nodeIds[18] = builder.addSplitNode(treeId, nodeIds[14], 1, 5, (DAAL_DATA_TYPE)0.74550000000000016);
    builder.addLeafNode(treeId, nodeIds[18], 0, (DAAL_DATA_TYPE)0.013708414909030712);
    builder.addLeafNode(treeId, nodeIds[18], 1, (DAAL_DATA_TYPE)0.0013396896270569416);
    builder.addLeafNode(treeId, nodeIds[7], 1, (DAAL_DATA_TYPE)-0.0049694962529955727);
    nodeIds[22] = builder.addSplitNode(treeId, nodeIds[6], 1, 6, (DAAL_DATA_TYPE)-0.81649999999999989);
    nodeIds[23] = builder.addSplitNode(treeId, nodeIds[22], 0, 4, (DAAL_DATA_TYPE)-0.27149999999999996);
    builder.addLeafNode(treeId, nodeIds[23], 0, (DAAL_DATA_TYPE)-0.011522123031318188);
    builder.addLeafNode(treeId, nodeIds[23], 1, (DAAL_DATA_TYPE)0.0024523430771660063);
    nodeIds[26] = builder.addSplitNode(treeId, nodeIds[22], 1, 5, (DAAL_DATA_TYPE)0.97250000000000003);
    nodeIds[27] = builder.addSplitNode(treeId, nodeIds[26], 0, 4, (DAAL_DATA_TYPE)0.95950000000000013);
    builder.addLeafNode(treeId, nodeIds[27], 0, (DAAL_DATA_TYPE)0.0094624859522030296);
    builder.addLeafNode(treeId, nodeIds[27], 1, (DAAL_DATA_TYPE)-0.0013965205247513952);
    nodeIds[30] = builder.addSplitNode(treeId, nodeIds[26], 1, 5, (DAAL_DATA_TYPE)1.3365000000000002);
    builder.addLeafNode(treeId, nodeIds[30], 0, (DAAL_DATA_TYPE)-0.0030052705007520587);
    builder.addLeafNode(treeId, nodeIds[30], 1, (DAAL_DATA_TYPE)0.0066892554707549236);
    nodeIds[33] = builder.addSplitNode(treeId, nodeIds[5], 1, 27, (DAAL_DATA_TYPE)0.68250000000000022);
    nodeIds[34] = builder.addSplitNode(treeId, nodeIds[33], 0, 13, (DAAL_DATA_TYPE)0.75350000000000017);
    builder.addLeafNode(treeId, nodeIds[34], 0, (DAAL_DATA_TYPE)-0.0024495357880368832);
    builder.addLeafNode(treeId, nodeIds[34], 1, (DAAL_DATA_TYPE)0.010171044620219619);
    nodeIds[37] = builder.addSplitNode(treeId, nodeIds[33], 1, 17, (DAAL_DATA_TYPE)1.2855000000000001);
    nodeIds[38] = builder.addSplitNode(treeId, nodeIds[37], 0, 0, (DAAL_DATA_TYPE)2.3645000000000005);
    builder.addLeafNode(treeId, nodeIds[38], 0, (DAAL_DATA_TYPE)-0.0034654880067506162);
    builder.addLeafNode(treeId, nodeIds[38], 1, (DAAL_DATA_TYPE)0.003917304021306336);
    nodeIds[41] = builder.addSplitNode(treeId, nodeIds[37], 1, 6, (DAAL_DATA_TYPE)1.6320000000000003);
    nodeIds[42] = builder.addSplitNode(treeId, nodeIds[41], 0, 2, (DAAL_DATA_TYPE)-0.81249999999999989);
    builder.addLeafNode(treeId, nodeIds[42], 0, (DAAL_DATA_TYPE)-0.0041143241739863981);
    nodeIds[44] = builder.addSplitNode(treeId, nodeIds[42], 1, 7, (DAAL_DATA_TYPE)0.74750000000000016);
    builder.addLeafNode(treeId, nodeIds[44], 0, (DAAL_DATA_TYPE)0.0015629353988472197);
    builder.addLeafNode(treeId, nodeIds[44], 1, (DAAL_DATA_TYPE)0.010109748586248128);
    builder.addLeafNode(treeId, nodeIds[41], 1, (DAAL_DATA_TYPE)-0.0079963962306027064);
    builder.addLeafNode(treeId, nodeIds[4], 1, (DAAL_DATA_TYPE)0.0085581551596987989);
    nodeIds[49] = builder.addSplitNode(treeId, nodeIds[1], 1, 17, (DAAL_DATA_TYPE)0.46950000000000003);
    builder.addLeafNode(treeId, nodeIds[49], 0, (DAAL_DATA_TYPE)-0.0095013307185754896);
    nodeIds[51] = builder.addSplitNode(treeId, nodeIds[49], 1, 7, (DAAL_DATA_TYPE)0.24650000000000002);
    nodeIds[52] = builder.addSplitNode(treeId, nodeIds[51], 0, 21, (DAAL_DATA_TYPE)0.99950000000000017);
    nodeIds[53] = builder.addSplitNode(treeId, nodeIds[52], 0, 7, (DAAL_DATA_TYPE)-0.87449999999999994);
    builder.addLeafNode(treeId, nodeIds[53], 0, (DAAL_DATA_TYPE)-0.0013125358521938325);
    nodeIds[55] = builder.addSplitNode(treeId, nodeIds[53], 1, 10, (DAAL_DATA_TYPE)0.6645000000000002);
    builder.addLeafNode(treeId, nodeIds[55], 0, (DAAL_DATA_TYPE)0.0014374908042295179);
    builder.addLeafNode(treeId, nodeIds[55], 1, (DAAL_DATA_TYPE)0.013909789815079421);
    builder.addLeafNode(treeId, nodeIds[52], 1, (DAAL_DATA_TYPE)-0.0044808848737142026);
    nodeIds[59] = builder.addSplitNode(treeId, nodeIds[51], 1, 13, (DAAL_DATA_TYPE)1.0675000000000001);
    builder.addLeafNode(treeId, nodeIds[59], 0, (DAAL_DATA_TYPE)-0.0066104421656663446);
    builder.addLeafNode(treeId, nodeIds[59], 1, (DAAL_DATA_TYPE)0.0028621112329087089);

}
