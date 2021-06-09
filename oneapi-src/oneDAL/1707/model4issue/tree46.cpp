 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree46(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 27, (DAAL_DATA_TYPE)1.0105000000000002);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 5, (DAAL_DATA_TYPE)1.0895000000000004);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 13, (DAAL_DATA_TYPE)1.4385000000000001);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 10, (DAAL_DATA_TYPE)-1.3474999999999999);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[4], 0, 3, (DAAL_DATA_TYPE)0.56150000000000022);
    builder.addLeafNode(treeId, nodeIds[5], 0, (DAAL_DATA_TYPE)0.0029974895463862894);
    builder.addLeafNode(treeId, nodeIds[5], 1, (DAAL_DATA_TYPE)-0.0073829822071961003);
    nodeIds[8] = builder.addSplitNode(treeId, nodeIds[4], 1, 25, (DAAL_DATA_TYPE)0.96550000000000014);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[8], 0, 25, (DAAL_DATA_TYPE)0.78850000000000009);
    nodeIds[10] = builder.addSplitNode(treeId, nodeIds[9], 0, 27, (DAAL_DATA_TYPE)0.85050000000000014);
    nodeIds[11] = builder.addSplitNode(treeId, nodeIds[10], 0, 26, (DAAL_DATA_TYPE)0.72450000000000003);
    nodeIds[12] = builder.addSplitNode(treeId, nodeIds[11], 0, 3, (DAAL_DATA_TYPE)0.39450000000000007);
    builder.addLeafNode(treeId, nodeIds[12], 0, (DAAL_DATA_TYPE)0.0074797519482672215);
    nodeIds[14] = builder.addSplitNode(treeId, nodeIds[12], 1, 19, (DAAL_DATA_TYPE)0.89550000000000007);
    nodeIds[15] = builder.addSplitNode(treeId, nodeIds[14], 0, 6, (DAAL_DATA_TYPE)-0.63649999999999995);
    nodeIds[16] = builder.addSplitNode(treeId, nodeIds[15], 0, 7, (DAAL_DATA_TYPE)0.64350000000000007);
    builder.addLeafNode(treeId, nodeIds[16], 0, (DAAL_DATA_TYPE)0.011700291264998287);
    builder.addLeafNode(treeId, nodeIds[16], 1, (DAAL_DATA_TYPE)-0.0046757977455854421);
    builder.addLeafNode(treeId, nodeIds[15], 1, (DAAL_DATA_TYPE)-0.0036697800664659492);
    builder.addLeafNode(treeId, nodeIds[14], 1, (DAAL_DATA_TYPE)-0.010154219374231908);
    nodeIds[21] = builder.addSplitNode(treeId, nodeIds[11], 1, 0, (DAAL_DATA_TYPE)0.99550000000000016);
    nodeIds[22] = builder.addSplitNode(treeId, nodeIds[21], 0, 20, (DAAL_DATA_TYPE)1.0000000180025095e-35);
    nodeIds[23] = builder.addSplitNode(treeId, nodeIds[22], 0, 9, (DAAL_DATA_TYPE)0.7965000000000001);
    nodeIds[24] = builder.addSplitNode(treeId, nodeIds[23], 0, 1, (DAAL_DATA_TYPE)0.35850000000000004);
    builder.addLeafNode(treeId, nodeIds[24], 0, (DAAL_DATA_TYPE)-0.0016248604989257355);
    builder.addLeafNode(treeId, nodeIds[24], 1, (DAAL_DATA_TYPE)-0.015666759270760749);
    builder.addLeafNode(treeId, nodeIds[23], 1, (DAAL_DATA_TYPE)0.0027884839629025563);
    builder.addLeafNode(treeId, nodeIds[22], 1, (DAAL_DATA_TYPE)0.003947949626132952);
    builder.addLeafNode(treeId, nodeIds[21], 1, (DAAL_DATA_TYPE)0.0053814321826651419);
    nodeIds[30] = builder.addSplitNode(treeId, nodeIds[10], 1, 5, (DAAL_DATA_TYPE)0.45850000000000007);
    builder.addLeafNode(treeId, nodeIds[30], 0, (DAAL_DATA_TYPE)0.011338649832067036);
    builder.addLeafNode(treeId, nodeIds[30], 1, (DAAL_DATA_TYPE)-0.0064316936540153788);
    nodeIds[33] = builder.addSplitNode(treeId, nodeIds[9], 1, 26, (DAAL_DATA_TYPE)1.0225000000000002);
    builder.addLeafNode(treeId, nodeIds[33], 0, (DAAL_DATA_TYPE)0.0020855891446654616);
    builder.addLeafNode(treeId, nodeIds[33], 1, (DAAL_DATA_TYPE)0.0097089066415240888);
    nodeIds[36] = builder.addSplitNode(treeId, nodeIds[8], 1, 26, (DAAL_DATA_TYPE)0.82250000000000012);
    builder.addLeafNode(treeId, nodeIds[36], 0, (DAAL_DATA_TYPE)-0.0082403532651245098);
    nodeIds[38] = builder.addSplitNode(treeId, nodeIds[36], 1, 0, (DAAL_DATA_TYPE)0.38050000000000006);
    builder.addLeafNode(treeId, nodeIds[38], 0, (DAAL_DATA_TYPE)0.0086317777101482668);
    nodeIds[40] = builder.addSplitNode(treeId, nodeIds[38], 1, 6, (DAAL_DATA_TYPE)1.1100000000000001);
    builder.addLeafNode(treeId, nodeIds[40], 0, (DAAL_DATA_TYPE)-0.00079584439893153102);
    builder.addLeafNode(treeId, nodeIds[40], 1, (DAAL_DATA_TYPE)-0.0099970658881622446);
    nodeIds[43] = builder.addSplitNode(treeId, nodeIds[3], 1, 23, (DAAL_DATA_TYPE)1.1125000000000003);
    builder.addLeafNode(treeId, nodeIds[43], 0, (DAAL_DATA_TYPE)0.0023258545756974116);
    builder.addLeafNode(treeId, nodeIds[43], 1, (DAAL_DATA_TYPE)0.013398452316011703);
    builder.addLeafNode(treeId, nodeIds[2], 1, (DAAL_DATA_TYPE)0.0037752694468208628);
    nodeIds[47] = builder.addSplitNode(treeId, nodeIds[1], 1, 22, (DAAL_DATA_TYPE)1.0465000000000002);
    nodeIds[48] = builder.addSplitNode(treeId, nodeIds[47], 0, 22, (DAAL_DATA_TYPE)0.74450000000000005);
    builder.addLeafNode(treeId, nodeIds[48], 0, (DAAL_DATA_TYPE)0.0040458826731671303);
    builder.addLeafNode(treeId, nodeIds[48], 1, (DAAL_DATA_TYPE)-0.0047242369027959948);
    nodeIds[51] = builder.addSplitNode(treeId, nodeIds[47], 1, 7, (DAAL_DATA_TYPE)-0.72549999999999992);
    nodeIds[52] = builder.addSplitNode(treeId, nodeIds[51], 0, 7, (DAAL_DATA_TYPE)-0.91449999999999998);
    nodeIds[53] = builder.addSplitNode(treeId, nodeIds[52], 0, 15, (DAAL_DATA_TYPE)-0.47649999999999992);
    builder.addLeafNode(treeId, nodeIds[53], 0, (DAAL_DATA_TYPE)0.0097686646101267441);
    nodeIds[55] = builder.addSplitNode(treeId, nodeIds[53], 1, 11, (DAAL_DATA_TYPE)1.0525000000000002);
    builder.addLeafNode(treeId, nodeIds[55], 0, (DAAL_DATA_TYPE)0.001406853497028351);
    builder.addLeafNode(treeId, nodeIds[55], 1, (DAAL_DATA_TYPE)-0.013654023029196723);
    builder.addLeafNode(treeId, nodeIds[52], 1, (DAAL_DATA_TYPE)0.012821670392384896);
    nodeIds[59] = builder.addSplitNode(treeId, nodeIds[51], 1, 1, (DAAL_DATA_TYPE)-1.3334999999999997);
    builder.addLeafNode(treeId, nodeIds[59], 0, (DAAL_DATA_TYPE)-0.010665314072476966);
    builder.addLeafNode(treeId, nodeIds[59], 1, (DAAL_DATA_TYPE)-0.00083608987047471134);

}
