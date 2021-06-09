 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree191(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 25, (DAAL_DATA_TYPE)0.94550000000000012);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 24, (DAAL_DATA_TYPE)2.2220000000000004);
    builder.addLeafNode(treeId, nodeIds[2], 0, (DAAL_DATA_TYPE)0.0004458959184852505);
    builder.addLeafNode(treeId, nodeIds[2], 1, (DAAL_DATA_TYPE)-0.0081643459265646739);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[1], 1, 26, (DAAL_DATA_TYPE)0.92450000000000021);
    nodeIds[6] = builder.addSplitNode(treeId, nodeIds[5], 0, 0, (DAAL_DATA_TYPE)1.3045000000000002);
    nodeIds[7] = builder.addSplitNode(treeId, nodeIds[6], 0, 14, (DAAL_DATA_TYPE)0.024500000000000004);
    nodeIds[8] = builder.addSplitNode(treeId, nodeIds[7], 0, 16, (DAAL_DATA_TYPE)1.0000000180025095e-35);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[8], 0, 22, (DAAL_DATA_TYPE)0.96950000000000014);
    nodeIds[10] = builder.addSplitNode(treeId, nodeIds[9], 0, 25, (DAAL_DATA_TYPE)1.0115000000000001);
    builder.addLeafNode(treeId, nodeIds[10], 0, (DAAL_DATA_TYPE)-0.0059128794171240022);
    nodeIds[12] = builder.addSplitNode(treeId, nodeIds[10], 1, 22, (DAAL_DATA_TYPE)0.88350000000000006);
    builder.addLeafNode(treeId, nodeIds[12], 0, (DAAL_DATA_TYPE)-0.0016738860756158828);
    builder.addLeafNode(treeId, nodeIds[12], 1, (DAAL_DATA_TYPE)0.010463740935792096);
    builder.addLeafNode(treeId, nodeIds[9], 1, (DAAL_DATA_TYPE)-0.010929254206040732);
    nodeIds[16] = builder.addSplitNode(treeId, nodeIds[8], 1, 17, (DAAL_DATA_TYPE)0.9405);
    nodeIds[17] = builder.addSplitNode(treeId, nodeIds[16], 0, 17, (DAAL_DATA_TYPE)0.68650000000000022);
    builder.addLeafNode(treeId, nodeIds[17], 0, (DAAL_DATA_TYPE)0.0064589200727641592);
    builder.addLeafNode(treeId, nodeIds[17], 1, (DAAL_DATA_TYPE)-0.0052394906171308511);
    builder.addLeafNode(treeId, nodeIds[16], 1, (DAAL_DATA_TYPE)0.012039451407926048);
    nodeIds[21] = builder.addSplitNode(treeId, nodeIds[7], 1, 0, (DAAL_DATA_TYPE)1.0205000000000002);
    nodeIds[22] = builder.addSplitNode(treeId, nodeIds[21], 0, 17, (DAAL_DATA_TYPE)1.1435000000000002);
    nodeIds[23] = builder.addSplitNode(treeId, nodeIds[22], 0, 25, (DAAL_DATA_TYPE)1.2995000000000003);
    builder.addLeafNode(treeId, nodeIds[23], 0, (DAAL_DATA_TYPE)-0.0097545277847107068);
    builder.addLeafNode(treeId, nodeIds[23], 1, (DAAL_DATA_TYPE)-0.00053418079763650891);
    nodeIds[26] = builder.addSplitNode(treeId, nodeIds[22], 1, 13, (DAAL_DATA_TYPE)1.1595000000000002);
    builder.addLeafNode(treeId, nodeIds[26], 0, (DAAL_DATA_TYPE)-0.0081460166722536094);
    builder.addLeafNode(treeId, nodeIds[26], 1, (DAAL_DATA_TYPE)0.0072905254162227116);
    builder.addLeafNode(treeId, nodeIds[21], 1, (DAAL_DATA_TYPE)0.0033645174865211758);
    nodeIds[30] = builder.addSplitNode(treeId, nodeIds[6], 1, 12, (DAAL_DATA_TYPE)1.0000000180025095e-35);
    builder.addLeafNode(treeId, nodeIds[30], 0, (DAAL_DATA_TYPE)-0.013260769124142827);
    builder.addLeafNode(treeId, nodeIds[30], 1, (DAAL_DATA_TYPE)-0.0033258162247828947);
    nodeIds[33] = builder.addSplitNode(treeId, nodeIds[5], 1, 18, (DAAL_DATA_TYPE)0.75050000000000006);
    nodeIds[34] = builder.addSplitNode(treeId, nodeIds[33], 0, 18, (DAAL_DATA_TYPE)0.5395000000000002);
    nodeIds[35] = builder.addSplitNode(treeId, nodeIds[34], 0, 3, (DAAL_DATA_TYPE)0.30350000000000005);
    nodeIds[36] = builder.addSplitNode(treeId, nodeIds[35], 0, 13, (DAAL_DATA_TYPE)0.81950000000000001);
    builder.addLeafNode(treeId, nodeIds[36], 0, (DAAL_DATA_TYPE)-0.0040382144634019245);
    nodeIds[38] = builder.addSplitNode(treeId, nodeIds[36], 1, 15, (DAAL_DATA_TYPE)-0.28749999999999992);
    builder.addLeafNode(treeId, nodeIds[38], 0, (DAAL_DATA_TYPE)0.014081020389373103);
    builder.addLeafNode(treeId, nodeIds[38], 1, (DAAL_DATA_TYPE)0.0031359925592208612);
    nodeIds[41] = builder.addSplitNode(treeId, nodeIds[35], 1, 18, (DAAL_DATA_TYPE)0.47900000000000004);
    builder.addLeafNode(treeId, nodeIds[41], 0, (DAAL_DATA_TYPE)-0.00093173814471703056);
    builder.addLeafNode(treeId, nodeIds[41], 1, (DAAL_DATA_TYPE)0.0055858782006544061);
    builder.addLeafNode(treeId, nodeIds[34], 1, (DAAL_DATA_TYPE)-0.0050397586672960857);
    nodeIds[45] = builder.addSplitNode(treeId, nodeIds[33], 1, 0, (DAAL_DATA_TYPE)0.60650000000000015);
    nodeIds[46] = builder.addSplitNode(treeId, nodeIds[45], 0, 8, (DAAL_DATA_TYPE)1.0000000180025095e-35);
    builder.addLeafNode(treeId, nodeIds[46], 0, (DAAL_DATA_TYPE)0.0044343800997367223);
    builder.addLeafNode(treeId, nodeIds[46], 1, (DAAL_DATA_TYPE)-0.0062839092290539484);
    nodeIds[49] = builder.addSplitNode(treeId, nodeIds[45], 1, 0, (DAAL_DATA_TYPE)1.0865000000000002);
    nodeIds[50] = builder.addSplitNode(treeId, nodeIds[49], 0, 19, (DAAL_DATA_TYPE)-0.84949999999999981);
    builder.addLeafNode(treeId, nodeIds[50], 0, (DAAL_DATA_TYPE)-0.0031480858356437904);
    nodeIds[52] = builder.addSplitNode(treeId, nodeIds[50], 1, 15, (DAAL_DATA_TYPE)0.25750000000000006);
    builder.addLeafNode(treeId, nodeIds[52], 0, (DAAL_DATA_TYPE)0.004625538212557634);
    builder.addLeafNode(treeId, nodeIds[52], 1, (DAAL_DATA_TYPE)0.013204654065892101);
    nodeIds[55] = builder.addSplitNode(treeId, nodeIds[49], 1, 18, (DAAL_DATA_TYPE)1.2545000000000002);
    nodeIds[56] = builder.addSplitNode(treeId, nodeIds[55], 0, 18, (DAAL_DATA_TYPE)1.0075000000000001);
    builder.addLeafNode(treeId, nodeIds[56], 0, (DAAL_DATA_TYPE)0.00080106364804561486);
    builder.addLeafNode(treeId, nodeIds[56], 1, (DAAL_DATA_TYPE)-0.0086978323100244306);
    nodeIds[59] = builder.addSplitNode(treeId, nodeIds[55], 1, 21, (DAAL_DATA_TYPE)0.91550000000000009);
    builder.addLeafNode(treeId, nodeIds[59], 0, (DAAL_DATA_TYPE)0.012707523480224024);
    builder.addLeafNode(treeId, nodeIds[59], 1, (DAAL_DATA_TYPE)-0.0014987727805749853);

}
