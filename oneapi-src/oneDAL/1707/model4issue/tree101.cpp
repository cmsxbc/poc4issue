 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree101(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 10, (DAAL_DATA_TYPE)-2.5549999999999993);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 16, (DAAL_DATA_TYPE)1.0000000180025095e-35);
    builder.addLeafNode(treeId, nodeIds[2], 0, (DAAL_DATA_TYPE)-0.015090338771485471);
    builder.addLeafNode(treeId, nodeIds[2], 1, (DAAL_DATA_TYPE)0.0012669836680981377);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[1], 1, 24, (DAAL_DATA_TYPE)0.64150000000000007);
    nodeIds[6] = builder.addSplitNode(treeId, nodeIds[5], 0, 3, (DAAL_DATA_TYPE)1.4915000000000003);
    nodeIds[7] = builder.addSplitNode(treeId, nodeIds[6], 0, 4, (DAAL_DATA_TYPE)0.08900000000000001);
    nodeIds[8] = builder.addSplitNode(treeId, nodeIds[7], 0, 24, (DAAL_DATA_TYPE)0.60250000000000015);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[8], 0, 26, (DAAL_DATA_TYPE)0.78050000000000008);
    nodeIds[10] = builder.addSplitNode(treeId, nodeIds[9], 0, 1, (DAAL_DATA_TYPE)-0.61549999999999983);
    builder.addLeafNode(treeId, nodeIds[10], 0, (DAAL_DATA_TYPE)0.004587452586740255);
    builder.addLeafNode(treeId, nodeIds[10], 1, (DAAL_DATA_TYPE)-0.010053133389406037);
    builder.addLeafNode(treeId, nodeIds[9], 1, (DAAL_DATA_TYPE)0.0034400092895058073);
    nodeIds[14] = builder.addSplitNode(treeId, nodeIds[8], 1, 14, (DAAL_DATA_TYPE)-0.62549999999999983);
    builder.addLeafNode(treeId, nodeIds[14], 0, (DAAL_DATA_TYPE)-0.0031268562155741236);
    builder.addLeafNode(treeId, nodeIds[14], 1, (DAAL_DATA_TYPE)0.00807168021487693);
    builder.addLeafNode(treeId, nodeIds[7], 1, (DAAL_DATA_TYPE)0.0052381900788567894);
    builder.addLeafNode(treeId, nodeIds[6], 1, (DAAL_DATA_TYPE)-0.0062175060567610414);
    nodeIds[19] = builder.addSplitNode(treeId, nodeIds[5], 1, 4, (DAAL_DATA_TYPE)0.31550000000000006);
    nodeIds[20] = builder.addSplitNode(treeId, nodeIds[19], 0, 10, (DAAL_DATA_TYPE)-1.3164999999999998);
    nodeIds[21] = builder.addSplitNode(treeId, nodeIds[20], 0, 25, (DAAL_DATA_TYPE)0.7855000000000002);
    builder.addLeafNode(treeId, nodeIds[21], 0, (DAAL_DATA_TYPE)-0.0070374765743811928);
    nodeIds[23] = builder.addSplitNode(treeId, nodeIds[21], 1, 6, (DAAL_DATA_TYPE)0.12450000000000001);
    nodeIds[24] = builder.addSplitNode(treeId, nodeIds[23], 0, 1, (DAAL_DATA_TYPE)-1.3334999999999997);
    builder.addLeafNode(treeId, nodeIds[24], 0, (DAAL_DATA_TYPE)0.0072173929415070091);
    builder.addLeafNode(treeId, nodeIds[24], 1, (DAAL_DATA_TYPE)-0.0059090746783961859);
    nodeIds[27] = builder.addSplitNode(treeId, nodeIds[23], 1, 24, (DAAL_DATA_TYPE)1.0155000000000001);
    builder.addLeafNode(treeId, nodeIds[27], 0, (DAAL_DATA_TYPE)-0.00016427846706431844);
    builder.addLeafNode(treeId, nodeIds[27], 1, (DAAL_DATA_TYPE)0.014758011615938611);
    nodeIds[30] = builder.addSplitNode(treeId, nodeIds[20], 1, 1, (DAAL_DATA_TYPE)-1.3104999999999998);
    nodeIds[31] = builder.addSplitNode(treeId, nodeIds[30], 0, 27, (DAAL_DATA_TYPE)1.1575000000000002);
    nodeIds[32] = builder.addSplitNode(treeId, nodeIds[31], 0, 22, (DAAL_DATA_TYPE)0.96950000000000014);
    nodeIds[33] = builder.addSplitNode(treeId, nodeIds[32], 0, 13, (DAAL_DATA_TYPE)0.69450000000000001);
    nodeIds[34] = builder.addSplitNode(treeId, nodeIds[33], 0, 17, (DAAL_DATA_TYPE)0.66550000000000009);
    builder.addLeafNode(treeId, nodeIds[34], 0, (DAAL_DATA_TYPE)-0.0015943708643317224);
    builder.addLeafNode(treeId, nodeIds[34], 1, (DAAL_DATA_TYPE)-0.016847494731728845);
    nodeIds[37] = builder.addSplitNode(treeId, nodeIds[33], 1, 13, (DAAL_DATA_TYPE)1.0175000000000003);
    builder.addLeafNode(treeId, nodeIds[37], 0, (DAAL_DATA_TYPE)0.007613271368124213);
    builder.addLeafNode(treeId, nodeIds[37], 1, (DAAL_DATA_TYPE)-0.0066657221963945428);
    nodeIds[40] = builder.addSplitNode(treeId, nodeIds[32], 1, 7, (DAAL_DATA_TYPE)-0.33849999999999997);
    builder.addLeafNode(treeId, nodeIds[40], 0, (DAAL_DATA_TYPE)0.014912696957491853);
    nodeIds[42] = builder.addSplitNode(treeId, nodeIds[40], 1, 27, (DAAL_DATA_TYPE)0.86550000000000005);
    builder.addLeafNode(treeId, nodeIds[42], 0, (DAAL_DATA_TYPE)0.0072189817285357883);
    builder.addLeafNode(treeId, nodeIds[42], 1, (DAAL_DATA_TYPE)-0.0058768439909507491);
    builder.addLeafNode(treeId, nodeIds[31], 1, (DAAL_DATA_TYPE)-0.0095843116558072261);
    nodeIds[46] = builder.addSplitNode(treeId, nodeIds[30], 1, 0, (DAAL_DATA_TYPE)1.4175000000000002);
    builder.addLeafNode(treeId, nodeIds[46], 0, (DAAL_DATA_TYPE)0.0015431592643368418);
    nodeIds[48] = builder.addSplitNode(treeId, nodeIds[46], 1, 1, (DAAL_DATA_TYPE)1.2215000000000003);
    builder.addLeafNode(treeId, nodeIds[48], 0, (DAAL_DATA_TYPE)-0.00013622801155809889);
    builder.addLeafNode(treeId, nodeIds[48], 1, (DAAL_DATA_TYPE)-0.01025994230563251);
    nodeIds[51] = builder.addSplitNode(treeId, nodeIds[19], 1, 24, (DAAL_DATA_TYPE)0.65450000000000019);
    builder.addLeafNode(treeId, nodeIds[51], 0, (DAAL_DATA_TYPE)-0.0099359155902939474);
    nodeIds[53] = builder.addSplitNode(treeId, nodeIds[51], 1, 9, (DAAL_DATA_TYPE)0.53150000000000019);
    nodeIds[54] = builder.addSplitNode(treeId, nodeIds[53], 0, 15, (DAAL_DATA_TYPE)0.59650000000000014);
    nodeIds[55] = builder.addSplitNode(treeId, nodeIds[54], 0, 3, (DAAL_DATA_TYPE)1.6420000000000001);
    nodeIds[56] = builder.addSplitNode(treeId, nodeIds[55], 0, 9, (DAAL_DATA_TYPE)0.47150000000000003);
    builder.addLeafNode(treeId, nodeIds[56], 0, (DAAL_DATA_TYPE)-0.0043229348879928386);
    builder.addLeafNode(treeId, nodeIds[56], 1, (DAAL_DATA_TYPE)-0.012619539133497868);
    builder.addLeafNode(treeId, nodeIds[55], 1, (DAAL_DATA_TYPE)0.0032040718528959485);
    builder.addLeafNode(treeId, nodeIds[54], 1, (DAAL_DATA_TYPE)0.001012252758003094);
    builder.addLeafNode(treeId, nodeIds[53], 1, (DAAL_DATA_TYPE)-0.00032339748856175416);

}
